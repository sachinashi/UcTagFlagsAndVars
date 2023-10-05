// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UCTagVarsSubsystem.generated.h"

// Event Dispatcher[OnChangeVariable]
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChangeVariableDelegate, FGameplayTag, Tag, float, Variable);

/**
 *
 */
UCLASS()
class UCTAGFLAGSANDVARS_API UUCTagVarsSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UUCTagVarsSubsystem();

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	// variable ------------------------------------------------------------------------
	// @return Value of the Variable
	UFUNCTION(BlueprintPure, Category = "Variable", meta = (GameplayTagFilter = "UC.Variable"))
	virtual float GetVariable(const FGameplayTag _Tag);

	// @return Value of the set Variable
	UFUNCTION(BlueprintCallable, Category = "Variable", meta = (GameplayTagFilter = "UC.Variable", AdvancedDisplay = "_Error_Tolerance"))
	virtual float SetVariable(const FGameplayTag _Tag, const float _Variable, const float _Error_Tolerance = 0.000001);

	UFUNCTION(BlueprintPure, Category = "Variable")
	TMap<FGameplayTag, float> GetVariableMap() const;

	UFUNCTION(BlueprintCallable, Category = "Variable")
	void SetVariableMap(const TMap<FGameplayTag, float> _GameVariableMap);

	// @return Value of the added Variable
	UFUNCTION(BlueprintCallable, Category = "Variable", meta = (GameplayTagFilter = "UC.Variable", AdvancedDisplay = "_Error_Tolerance"))
	virtual float AddVariable(const FGameplayTag _Tag, const  float _Variable, const float _Error_Tolerance = 0.000001);
	
	// @return Array of sorted Key tags
	UFUNCTION(BlueprintPure, Category = "Variable", meta = (GameplayTagFilter = "UC.Variable"))
	virtual TArray<FGameplayTag> SortedTags();

	//------------------------------------------------------------------------
	UPROPERTY(BlueprintAssignable, Category = "EventDispatcher")
	FChangeVariableDelegate OnChangeVariable;

protected:
	UPROPERTY(VisibleAnywhere, Category = "Variable", SaveGame)
	TMap<FGameplayTag, float> GameVariableMap;

};
