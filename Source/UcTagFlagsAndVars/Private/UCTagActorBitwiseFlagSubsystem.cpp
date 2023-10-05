// Fill out your copyright notice in the Description page of Project Settings.


#include "UCTagActorBitwiseFlagSubsystem.h"


UUCTagActorBitwiseFlagSubsystem::UUCTagActorBitwiseFlagSubsystem()
	:UGameInstanceSubsystem()
{

}

void UUCTagActorBitwiseFlagSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
}

void UUCTagActorBitwiseFlagSubsystem::Deinitialize()
{
	GameActorBitwiseFlagMap.Reset();
}

// Actor BitwiseFlag ------------------------------------------------------------------------
int32 UUCTagActorBitwiseFlagSubsystem::GetActorBitwiseFlag(const FGameplayTag _Tag)
{
	int32* ptrIsFind = GameActorBitwiseFlagMap.Find(_Tag);

	if (ptrIsFind)
	{
		return *ptrIsFind; // has _tag variable
	}

	GameActorBitwiseFlagMap.Add(_Tag, 0);

	return 0;
}

int32 UUCTagActorBitwiseFlagSubsystem::SetActorBitwiseFlag(const FGameplayTag _Tag, const int32 _ActorBitwiseFlag)
{
	const int32 ptrIsFind = UUCTagActorBitwiseFlagSubsystem::GetActorBitwiseFlag(_Tag); // temp old Variable

	GameActorBitwiseFlagMap.Add(_Tag, _ActorBitwiseFlag); // add 

	if (ptrIsFind != _ActorBitwiseFlag)
	{
		OnChangeActorBitwiseFlag.Broadcast(_Tag, _ActorBitwiseFlag); //Event Dispatche
	}
	
	return _ActorBitwiseFlag;
}

TMap<FGameplayTag, int32> UUCTagActorBitwiseFlagSubsystem::GetActorBitwiseFlagMap() const
{
	return GameActorBitwiseFlagMap;
}

void UUCTagActorBitwiseFlagSubsystem::SetActorBitwiseFlagMap(const TMap<FGameplayTag, int32> __ActorBitwiseFlagMap)
{
	GameActorBitwiseFlagMap = __ActorBitwiseFlagMap;
}

int32 UUCTagActorBitwiseFlagSubsystem::BitOnActorBitwiseFlag(const FGameplayTag _Tag, const int32 _ActorBitwiseFlag)
{
	int32 SubjectBitOn = UUCTagActorBitwiseFlagSubsystem::GetActorBitwiseFlag(_Tag) | (_ActorBitwiseFlag);
	SetActorBitwiseFlag(_Tag, SubjectBitOn);
	return SubjectBitOn;
}

int32 UUCTagActorBitwiseFlagSubsystem::BitOffActorBitwiseFlag(const FGameplayTag _Tag, const  int32 _ActorBitwiseFlag)
{
	int32 SubjectBitOff = UUCTagActorBitwiseFlagSubsystem::GetActorBitwiseFlag(_Tag) & ~(_ActorBitwiseFlag);
	SetActorBitwiseFlag(_Tag, SubjectBitOff);
	return SubjectBitOff;
}

int32 UUCTagActorBitwiseFlagSubsystem::BitFlipActorBitwiseFlag(const FGameplayTag _Tag, const int32 _ActorBitwiseFlag)
{
	int32 SubjectBitFlip = UUCTagActorBitwiseFlagSubsystem::GetActorBitwiseFlag(_Tag) ^ (_ActorBitwiseFlag);
	SetActorBitwiseFlag(_Tag, SubjectBitFlip);
	return SubjectBitFlip;
}

bool UUCTagActorBitwiseFlagSubsystem::IsIncludeActorBitwiseFlag(const FGameplayTag _Tag, const int32 _ActorBitwiseFlag)
{
	if (_ActorBitwiseFlag == 0) 
	{
		return false; // no flag
	}

	uint32 BitwiseTagFlag = UUCTagActorBitwiseFlagSubsystem::GetActorBitwiseFlag(_Tag);
	uint32 BitwiseActorFlag = ~(_ActorBitwiseFlag);

	// ex. 0100 | !(0100) -> 1111 : OK 
	// ex. 0100 | !(0001) -> 1110 : NO
	// ex. 0010 | !(0001) -> 1110 : NO
	// ex. 0001 | !(0001) -> 1111 : OK
	uint32 BitwiseDisjunction = (BitwiseTagFlag | BitwiseActorFlag);

	return (BitwiseDisjunction == MAX_uint32);
}

TArray<FGameplayTag> UUCTagActorBitwiseFlagSubsystem::SortedTags()
{
	TArray<FGameplayTag> KeyArray;

	GameActorBitwiseFlagMap.KeySort([](FGameplayTag a, FGameplayTag b)
		{
			return a < b;
		}
	);

	GameActorBitwiseFlagMap.GenerateKeyArray(KeyArray);

	return KeyArray;
}
