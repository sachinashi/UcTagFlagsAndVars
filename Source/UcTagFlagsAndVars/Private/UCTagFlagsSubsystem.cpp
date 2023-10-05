// Fill out your copyright notice in the Description page of Project Settings.

#include "UCTagFlagsSubsystem.h"

UUCTagFlagsSubsystem::UUCTagFlagsSubsystem()
	:UGameInstanceSubsystem()
{

}

void UUCTagFlagsSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
}

void UUCTagFlagsSubsystem::Deinitialize()
{
	GameFlagMap.Reset();
}

// flag ------------------------------------------------------------------------
bool UUCTagFlagsSubsystem::GetFlag(const FGameplayTag _Tag)
{
	bool* ptrIsFind = GameFlagMap.Find(_Tag);

	if (ptrIsFind)
	{
		return *ptrIsFind; // has _tag flag
	}

	GameFlagMap.Add(_Tag, false);

	return false;
}
bool UUCTagFlagsSubsystem::SetFlag(const FGameplayTag _Tag, const bool _Flag)
{
	const bool OldSubject = UUCTagFlagsSubsystem::GetFlag(_Tag); // temp old flag

	GameFlagMap.Add(_Tag, _Flag);

	if (OldSubject != _Flag)
	{
		OnChangeFlag.Broadcast(_Tag, _Flag); // Event Dispatche
	}

	return _Flag;
}
TMap<FGameplayTag, bool> UUCTagFlagsSubsystem::GetFlagMap() const
{
	return GameFlagMap;
}
void UUCTagFlagsSubsystem::SetFlagMap(const TMap<FGameplayTag, bool> _GameFlagMap)
{
	GameFlagMap = _GameFlagMap;
}

bool UUCTagFlagsSubsystem::SetFlagFlip(const FGameplayTag _Tag)
{
	bool Subject = not(UUCTagFlagsSubsystem::GetFlag(_Tag));
	UUCTagFlagsSubsystem::SetFlag(_Tag, Subject);
	return Subject;
}

TArray<FGameplayTag> UUCTagFlagsSubsystem::SortedTags()
{
	TArray<FGameplayTag> KeyArray;

	GameFlagMap.KeySort( [] (FGameplayTag a,  FGameplayTag b) 
		{
			return a < b;
		}
	);

	GameFlagMap.GenerateKeyArray(KeyArray);

	return KeyArray;
}

//------------------------------------------------------------------------
