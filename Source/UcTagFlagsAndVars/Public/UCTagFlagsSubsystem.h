// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UCTagFlagsSubsystem.generated.h"

// Event Dispatcher[OnChangeFlag]
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChangeFlagDelegate, FGameplayTag, Tag, bool, Flag);

/**
 *
 */
UCLASS()
class UCTAGFLAGSANDVARS_API UUCTagFlagsSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UUCTagFlagsSubsystem();

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	// flag ------------------------------------------------------------------------
	// @return Value of the flag
	UFUNCTION(BlueprintPure, Category = "Flag", meta = (GameplayTagFilter = "UC.Flag"))
	virtual bool GetFlag(const FGameplayTag _Tag);

	// @return Value of the set flag
	UFUNCTION(BlueprintCallable, Category = "Flag", meta = (GameplayTagFilter = "UC.Flag"))
	virtual bool SetFlag(const FGameplayTag _Tag, const bool _Flag);

	UFUNCTION(BlueprintPure, Category = "Flag")
	TMap<FGameplayTag, bool> GetFlagMap() const;

	UFUNCTION(BlueprintCallable, Category = "Flag")
	void SetFlagMap(const TMap<FGameplayTag, bool> _GameFlagMap);

	// @return Value of Flipped Flag
	UFUNCTION(BlueprintCallable, Category = "Flag", meta = (GameplayTagFilter = "UC.Flag"))
	virtual bool SetFlagFlip(const FGameplayTag _Tag);

	// @return Array of sorted Key tags
	UFUNCTION(BlueprintPure, Category = "Flag", meta = (GameplayTagFilter = "UC.Flag"))
	virtual TArray<FGameplayTag> SortedTags();

	//------------------------------------------------------------------------
	UPROPERTY(BlueprintAssignable, Category = "EventDispatcher")
	FChangeFlagDelegate OnChangeFlag;

protected:
	UPROPERTY(VisibleAnywhere, Category = "Flag", SaveGame)
	TMap<FGameplayTag, bool> GameFlagMap;
};
