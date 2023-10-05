// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UCTagActorBitwiseFlagSubsystem.generated.h"

// Event Dispatcher[OnChangeActorVariable]
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChangeActorBitwiseFlagDelegate, FGameplayTag, Tag, int32, ActorBitwiseFlag);

/**
 *
 */
UCLASS()
class UCTAGFLAGSANDVARS_API UUCTagActorBitwiseFlagSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UUCTagActorBitwiseFlagSubsystem();

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	// Actor Variable ------------------------------------------------------------------------
	// @return Value of the flag
	UFUNCTION(BlueprintPure, Category = "ActorVariable", meta = (GameplayTagFilter = "UC.Actor"))
	virtual int32 GetActorBitwiseFlag(const FGameplayTag _Tag);

	// @return Value of the set flag
	UFUNCTION(BlueprintCallable, Category = "ActorVariable", meta = (GameplayTagFilter = "UC.Actor"))
	virtual int32 SetActorBitwiseFlag(const FGameplayTag _Tag, const int32 _ActorBitwiseFlag);

	UFUNCTION(BlueprintPure, Category = "ActorVariable")
	TMap<FGameplayTag, int32> GetActorBitwiseFlagMap() const;

	UFUNCTION(BlueprintCallable, Category = "ActorVariable")
	void SetActorBitwiseFlagMap(const TMap<FGameplayTag, int32> __ActorBitwiseFlagMap);

	// @return Value of the set flag
	UFUNCTION(BlueprintCallable, Category = "ActorVariable", meta = (GameplayTagFilter = "UC.Actor"))
	virtual int32 BitOnActorBitwiseFlag(const FGameplayTag _Tag, const int32 _ActorBitwiseFlag);

	// @return Value of the set flag
	UFUNCTION(BlueprintCallable, Category = "ActorVariable", meta = (GameplayTagFilter = "UC.Actor"))
	virtual int32 BitOffActorBitwiseFlag(const FGameplayTag _Tag, const int32 _ActorBitwiseFlag);

	// @return Value of the set flag
	UFUNCTION(BlueprintCallable, Category = "ActorVariable", meta = (GameplayTagFilter = "UC.Actor"))
	virtual int32 BitFlipActorBitwiseFlag(const FGameplayTag _Tag, const int32 _ActorBitwiseFlag);

	// ex. 0100 | !(0100) -> 1111 : OK 
	// ex. 0100 | !(0001) -> 1110 : NO
	// ex. 0010 | !(0001) -> 1110 : NO
	// ex. 0001 | !(0001) -> 1111 : OK
	// @return all flags met
	UFUNCTION(BlueprintCallable, Category = "ActorVariable", meta = (GameplayTagFilter = "UC.Actor"))
	virtual bool IsIncludeActorBitwiseFlag(const FGameplayTag _Tag, const int32 _ActorBitwiseFlag);

	// @return Array of sorted Key tags
	UFUNCTION(BlueprintPure, Category = "ActorVariable", meta = (GameplayTagFilter = "UC.Actor"))
	virtual TArray<FGameplayTag> SortedTags();

	//------------------------------------------------------------------------
	UPROPERTY(BlueprintAssignable, Category = "EventDispatcher")
	FChangeActorBitwiseFlagDelegate OnChangeActorBitwiseFlag;

protected:
	UPROPERTY(VisibleAnywhere, Category = "ActorVariable", SaveGame)
	TMap<FGameplayTag, int32> GameActorBitwiseFlagMap;
};
