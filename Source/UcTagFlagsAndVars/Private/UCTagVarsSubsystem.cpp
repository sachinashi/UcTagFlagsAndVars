// Fill out your copyright notice in the Description page of Project Settings.


#include "UCTagVarsSubsystem.h"

UUCTagVarsSubsystem::UUCTagVarsSubsystem()
	:UGameInstanceSubsystem()
{

}

void UUCTagVarsSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
}

void UUCTagVarsSubsystem::Deinitialize()
{
	GameVariableMap.Reset();
}

// variable ------------------------------------------------------------------------
float UUCTagVarsSubsystem::GetVariable(const FGameplayTag _Tag)
{
	float* ptrIsFind = GameVariableMap.Find(_Tag);

	if (ptrIsFind) return *ptrIsFind; // has _tag variable

	GameVariableMap.Add(_Tag, 0.0f);

	return 0.0f;
}
float UUCTagVarsSubsystem::SetVariable(const FGameplayTag _Tag, const float _Variable, const float _Error_Tolerance)
{
	const float OldSubject = UUCTagVarsSubsystem::GetVariable(_Tag); // temp old Variable
	
	GameVariableMap.Add(_Tag, _Variable); // add 
	
	if (_Error_Tolerance < abs(OldSubject - _Variable)) OnChangeVariable.Broadcast(_Tag, _Variable); //Event Dispatche
	
	return _Variable;
}
TMap<FGameplayTag, float> UUCTagVarsSubsystem::GetVariableMap() const
{
	return GameVariableMap;
}
void UUCTagVarsSubsystem::SetVariableMap(const TMap<FGameplayTag, float> _GameVariableMap)
{
	GameVariableMap = _GameVariableMap;
}

float UUCTagVarsSubsystem::AddVariable(const FGameplayTag _Tag, const float _Variable, const float _Error_Tolerance)
{
	const float Subject = UUCTagVarsSubsystem::GetVariable(_Tag) + _Variable;
	UUCTagVarsSubsystem::SetVariable(_Tag, Subject, _Error_Tolerance);
	return Subject;
}

TArray<FGameplayTag> UUCTagVarsSubsystem::SortedTags()
{
	TArray<FGameplayTag> KeyArray;

	GameVariableMap.KeySort([](FGameplayTag a, FGameplayTag b)
		{
			return a < b;
		}
	);

	GameVariableMap.GenerateKeyArray(KeyArray);

	return KeyArray;
}
