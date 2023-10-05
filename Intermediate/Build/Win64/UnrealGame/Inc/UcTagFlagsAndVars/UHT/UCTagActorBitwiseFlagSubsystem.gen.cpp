// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UcTagFlagsAndVars/Public/UCTagActorBitwiseFlagSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUCTagActorBitwiseFlagSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UCTAGFLAGSANDVARS_API UClass* Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem();
	UCTAGFLAGSANDVARS_API UClass* Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem_NoRegister();
	UCTAGFLAGSANDVARS_API UFunction* Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeActorBitwiseFlagDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UcTagFlagsAndVars();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeActorBitwiseFlagDelegate__DelegateSignature_Statics
	{
		struct _Script_UcTagFlagsAndVars_eventChangeActorBitwiseFlagDelegate_Parms
		{
			FGameplayTag Tag;
			int32 ActorBitwiseFlag;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActorBitwiseFlag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeActorBitwiseFlagDelegate__DelegateSignature_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UcTagFlagsAndVars_eventChangeActorBitwiseFlagDelegate_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeActorBitwiseFlagDelegate__DelegateSignature_Statics::NewProp_ActorBitwiseFlag = { "ActorBitwiseFlag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UcTagFlagsAndVars_eventChangeActorBitwiseFlagDelegate_Parms, ActorBitwiseFlag), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeActorBitwiseFlagDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeActorBitwiseFlagDelegate__DelegateSignature_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeActorBitwiseFlagDelegate__DelegateSignature_Statics::NewProp_ActorBitwiseFlag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeActorBitwiseFlagDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Event Dispatcher[OnChangeActorVariable]\n" },
		{ "ModuleRelativePath", "Public/UCTagActorBitwiseFlagSubsystem.h" },
		{ "ToolTip", "Event Dispatcher[OnChangeActorVariable]" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeActorBitwiseFlagDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UcTagFlagsAndVars, nullptr, "ChangeActorBitwiseFlagDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeActorBitwiseFlagDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeActorBitwiseFlagDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeActorBitwiseFlagDelegate__DelegateSignature_Statics::_Script_UcTagFlagsAndVars_eventChangeActorBitwiseFlagDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeActorBitwiseFlagDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeActorBitwiseFlagDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeActorBitwiseFlagDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeActorBitwiseFlagDelegate__DelegateSignature_Statics::_Script_UcTagFlagsAndVars_eventChangeActorBitwiseFlagDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeActorBitwiseFlagDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeActorBitwiseFlagDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FChangeActorBitwiseFlagDelegate_DelegateWrapper(const FMulticastScriptDelegate& ChangeActorBitwiseFlagDelegate, FGameplayTag Tag, int32 ActorBitwiseFlag)
{
	struct _Script_UcTagFlagsAndVars_eventChangeActorBitwiseFlagDelegate_Parms
	{
		FGameplayTag Tag;
		int32 ActorBitwiseFlag;
	};
	_Script_UcTagFlagsAndVars_eventChangeActorBitwiseFlagDelegate_Parms Parms;
	Parms.Tag=Tag;
	Parms.ActorBitwiseFlag=ActorBitwiseFlag;
	ChangeActorBitwiseFlagDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UUCTagActorBitwiseFlagSubsystem::execSortedTags)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FGameplayTag>*)Z_Param__Result=P_THIS->SortedTags();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUCTagActorBitwiseFlagSubsystem::execIsIncludeActorBitwiseFlag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param__Tag);
		P_GET_PROPERTY(FIntProperty,Z_Param__ActorBitwiseFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsIncludeActorBitwiseFlag(Z_Param__Tag,Z_Param__ActorBitwiseFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUCTagActorBitwiseFlagSubsystem::execBitFlipActorBitwiseFlag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param__Tag);
		P_GET_PROPERTY(FIntProperty,Z_Param__ActorBitwiseFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->BitFlipActorBitwiseFlag(Z_Param__Tag,Z_Param__ActorBitwiseFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUCTagActorBitwiseFlagSubsystem::execBitOffActorBitwiseFlag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param__Tag);
		P_GET_PROPERTY(FIntProperty,Z_Param__ActorBitwiseFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->BitOffActorBitwiseFlag(Z_Param__Tag,Z_Param__ActorBitwiseFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUCTagActorBitwiseFlagSubsystem::execBitOnActorBitwiseFlag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param__Tag);
		P_GET_PROPERTY(FIntProperty,Z_Param__ActorBitwiseFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->BitOnActorBitwiseFlag(Z_Param__Tag,Z_Param__ActorBitwiseFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUCTagActorBitwiseFlagSubsystem::execSetActorBitwiseFlagMap)
	{
		P_GET_TMAP(FGameplayTag,int32,Z_Param___ActorBitwiseFlagMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActorBitwiseFlagMap(Z_Param___ActorBitwiseFlagMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUCTagActorBitwiseFlagSubsystem::execGetActorBitwiseFlagMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FGameplayTag,int32>*)Z_Param__Result=P_THIS->GetActorBitwiseFlagMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUCTagActorBitwiseFlagSubsystem::execSetActorBitwiseFlag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param__Tag);
		P_GET_PROPERTY(FIntProperty,Z_Param__ActorBitwiseFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetActorBitwiseFlag(Z_Param__Tag,Z_Param__ActorBitwiseFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUCTagActorBitwiseFlagSubsystem::execGetActorBitwiseFlag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param__Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetActorBitwiseFlag(Z_Param__Tag);
		P_NATIVE_END;
	}
	void UUCTagActorBitwiseFlagSubsystem::StaticRegisterNativesUUCTagActorBitwiseFlagSubsystem()
	{
		UClass* Class = UUCTagActorBitwiseFlagSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BitFlipActorBitwiseFlag", &UUCTagActorBitwiseFlagSubsystem::execBitFlipActorBitwiseFlag },
			{ "BitOffActorBitwiseFlag", &UUCTagActorBitwiseFlagSubsystem::execBitOffActorBitwiseFlag },
			{ "BitOnActorBitwiseFlag", &UUCTagActorBitwiseFlagSubsystem::execBitOnActorBitwiseFlag },
			{ "GetActorBitwiseFlag", &UUCTagActorBitwiseFlagSubsystem::execGetActorBitwiseFlag },
			{ "GetActorBitwiseFlagMap", &UUCTagActorBitwiseFlagSubsystem::execGetActorBitwiseFlagMap },
			{ "IsIncludeActorBitwiseFlag", &UUCTagActorBitwiseFlagSubsystem::execIsIncludeActorBitwiseFlag },
			{ "SetActorBitwiseFlag", &UUCTagActorBitwiseFlagSubsystem::execSetActorBitwiseFlag },
			{ "SetActorBitwiseFlagMap", &UUCTagActorBitwiseFlagSubsystem::execSetActorBitwiseFlagMap },
			{ "SortedTags", &UUCTagActorBitwiseFlagSubsystem::execSortedTags },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitFlipActorBitwiseFlag_Statics
	{
		struct UCTagActorBitwiseFlagSubsystem_eventBitFlipActorBitwiseFlag_Parms
		{
			FGameplayTag _Tag;
			int32 _ActorBitwiseFlag;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__ActorBitwiseFlag_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp__ActorBitwiseFlag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitFlipActorBitwiseFlag_Statics::NewProp__Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitFlipActorBitwiseFlag_Statics::NewProp__Tag = { "_Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagActorBitwiseFlagSubsystem_eventBitFlipActorBitwiseFlag_Parms, _Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitFlipActorBitwiseFlag_Statics::NewProp__Tag_MetaData), Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitFlipActorBitwiseFlag_Statics::NewProp__Tag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitFlipActorBitwiseFlag_Statics::NewProp__ActorBitwiseFlag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitFlipActorBitwiseFlag_Statics::NewProp__ActorBitwiseFlag = { "_ActorBitwiseFlag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagActorBitwiseFlagSubsystem_eventBitFlipActorBitwiseFlag_Parms, _ActorBitwiseFlag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitFlipActorBitwiseFlag_Statics::NewProp__ActorBitwiseFlag_MetaData), Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitFlipActorBitwiseFlag_Statics::NewProp__ActorBitwiseFlag_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitFlipActorBitwiseFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagActorBitwiseFlagSubsystem_eventBitFlipActorBitwiseFlag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitFlipActorBitwiseFlag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitFlipActorBitwiseFlag_Statics::NewProp__Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitFlipActorBitwiseFlag_Statics::NewProp__ActorBitwiseFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitFlipActorBitwiseFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitFlipActorBitwiseFlag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActorVariable" },
		{ "Comment", "// @return Value of the set flag\n" },
		{ "GameplayTagFilter", "UC.Actor" },
		{ "ModuleRelativePath", "Public/UCTagActorBitwiseFlagSubsystem.h" },
		{ "ToolTip", "@return Value of the set flag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitFlipActorBitwiseFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem, nullptr, "BitFlipActorBitwiseFlag", nullptr, nullptr, Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitFlipActorBitwiseFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitFlipActorBitwiseFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitFlipActorBitwiseFlag_Statics::UCTagActorBitwiseFlagSubsystem_eventBitFlipActorBitwiseFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitFlipActorBitwiseFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitFlipActorBitwiseFlag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitFlipActorBitwiseFlag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitFlipActorBitwiseFlag_Statics::UCTagActorBitwiseFlagSubsystem_eventBitFlipActorBitwiseFlag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitFlipActorBitwiseFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitFlipActorBitwiseFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOffActorBitwiseFlag_Statics
	{
		struct UCTagActorBitwiseFlagSubsystem_eventBitOffActorBitwiseFlag_Parms
		{
			FGameplayTag _Tag;
			int32 _ActorBitwiseFlag;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__ActorBitwiseFlag_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp__ActorBitwiseFlag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOffActorBitwiseFlag_Statics::NewProp__Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOffActorBitwiseFlag_Statics::NewProp__Tag = { "_Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagActorBitwiseFlagSubsystem_eventBitOffActorBitwiseFlag_Parms, _Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOffActorBitwiseFlag_Statics::NewProp__Tag_MetaData), Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOffActorBitwiseFlag_Statics::NewProp__Tag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOffActorBitwiseFlag_Statics::NewProp__ActorBitwiseFlag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOffActorBitwiseFlag_Statics::NewProp__ActorBitwiseFlag = { "_ActorBitwiseFlag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagActorBitwiseFlagSubsystem_eventBitOffActorBitwiseFlag_Parms, _ActorBitwiseFlag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOffActorBitwiseFlag_Statics::NewProp__ActorBitwiseFlag_MetaData), Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOffActorBitwiseFlag_Statics::NewProp__ActorBitwiseFlag_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOffActorBitwiseFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagActorBitwiseFlagSubsystem_eventBitOffActorBitwiseFlag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOffActorBitwiseFlag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOffActorBitwiseFlag_Statics::NewProp__Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOffActorBitwiseFlag_Statics::NewProp__ActorBitwiseFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOffActorBitwiseFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOffActorBitwiseFlag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActorVariable" },
		{ "Comment", "// @return Value of the set flag\n" },
		{ "GameplayTagFilter", "UC.Actor" },
		{ "ModuleRelativePath", "Public/UCTagActorBitwiseFlagSubsystem.h" },
		{ "ToolTip", "@return Value of the set flag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOffActorBitwiseFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem, nullptr, "BitOffActorBitwiseFlag", nullptr, nullptr, Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOffActorBitwiseFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOffActorBitwiseFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOffActorBitwiseFlag_Statics::UCTagActorBitwiseFlagSubsystem_eventBitOffActorBitwiseFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOffActorBitwiseFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOffActorBitwiseFlag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOffActorBitwiseFlag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOffActorBitwiseFlag_Statics::UCTagActorBitwiseFlagSubsystem_eventBitOffActorBitwiseFlag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOffActorBitwiseFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOffActorBitwiseFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOnActorBitwiseFlag_Statics
	{
		struct UCTagActorBitwiseFlagSubsystem_eventBitOnActorBitwiseFlag_Parms
		{
			FGameplayTag _Tag;
			int32 _ActorBitwiseFlag;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__ActorBitwiseFlag_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp__ActorBitwiseFlag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOnActorBitwiseFlag_Statics::NewProp__Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOnActorBitwiseFlag_Statics::NewProp__Tag = { "_Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagActorBitwiseFlagSubsystem_eventBitOnActorBitwiseFlag_Parms, _Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOnActorBitwiseFlag_Statics::NewProp__Tag_MetaData), Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOnActorBitwiseFlag_Statics::NewProp__Tag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOnActorBitwiseFlag_Statics::NewProp__ActorBitwiseFlag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOnActorBitwiseFlag_Statics::NewProp__ActorBitwiseFlag = { "_ActorBitwiseFlag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagActorBitwiseFlagSubsystem_eventBitOnActorBitwiseFlag_Parms, _ActorBitwiseFlag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOnActorBitwiseFlag_Statics::NewProp__ActorBitwiseFlag_MetaData), Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOnActorBitwiseFlag_Statics::NewProp__ActorBitwiseFlag_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOnActorBitwiseFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagActorBitwiseFlagSubsystem_eventBitOnActorBitwiseFlag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOnActorBitwiseFlag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOnActorBitwiseFlag_Statics::NewProp__Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOnActorBitwiseFlag_Statics::NewProp__ActorBitwiseFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOnActorBitwiseFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOnActorBitwiseFlag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActorVariable" },
		{ "Comment", "// @return Value of the set flag\n" },
		{ "GameplayTagFilter", "UC.Actor" },
		{ "ModuleRelativePath", "Public/UCTagActorBitwiseFlagSubsystem.h" },
		{ "ToolTip", "@return Value of the set flag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOnActorBitwiseFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem, nullptr, "BitOnActorBitwiseFlag", nullptr, nullptr, Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOnActorBitwiseFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOnActorBitwiseFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOnActorBitwiseFlag_Statics::UCTagActorBitwiseFlagSubsystem_eventBitOnActorBitwiseFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOnActorBitwiseFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOnActorBitwiseFlag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOnActorBitwiseFlag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOnActorBitwiseFlag_Statics::UCTagActorBitwiseFlagSubsystem_eventBitOnActorBitwiseFlag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOnActorBitwiseFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOnActorBitwiseFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlag_Statics
	{
		struct UCTagActorBitwiseFlagSubsystem_eventGetActorBitwiseFlag_Parms
		{
			FGameplayTag _Tag;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__Tag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlag_Statics::NewProp__Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlag_Statics::NewProp__Tag = { "_Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagActorBitwiseFlagSubsystem_eventGetActorBitwiseFlag_Parms, _Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlag_Statics::NewProp__Tag_MetaData), Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlag_Statics::NewProp__Tag_MetaData) }; // 2083603574
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagActorBitwiseFlagSubsystem_eventGetActorBitwiseFlag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlag_Statics::NewProp__Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActorVariable" },
		{ "Comment", "// Actor Variable ------------------------------------------------------------------------\n// @return Value of the flag\n" },
		{ "GameplayTagFilter", "UC.Actor" },
		{ "ModuleRelativePath", "Public/UCTagActorBitwiseFlagSubsystem.h" },
		{ "ToolTip", "Actor Variable ------------------------------------------------------------------------\n@return Value of the flag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem, nullptr, "GetActorBitwiseFlag", nullptr, nullptr, Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlag_Statics::UCTagActorBitwiseFlagSubsystem_eventGetActorBitwiseFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlag_Statics::UCTagActorBitwiseFlagSubsystem_eventGetActorBitwiseFlag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlagMap_Statics
	{
		struct UCTagActorBitwiseFlagSubsystem_eventGetActorBitwiseFlagMap_Parms
		{
			TMap<FGameplayTag,int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlagMap_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlagMap_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlagMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagActorBitwiseFlagSubsystem_eventGetActorBitwiseFlagMap_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlagMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlagMap_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlagMap_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlagMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlagMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActorVariable" },
		{ "ModuleRelativePath", "Public/UCTagActorBitwiseFlagSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlagMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem, nullptr, "GetActorBitwiseFlagMap", nullptr, nullptr, Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlagMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlagMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlagMap_Statics::UCTagActorBitwiseFlagSubsystem_eventGetActorBitwiseFlagMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlagMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlagMap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlagMap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlagMap_Statics::UCTagActorBitwiseFlagSubsystem_eventGetActorBitwiseFlagMap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlagMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlagMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_IsIncludeActorBitwiseFlag_Statics
	{
		struct UCTagActorBitwiseFlagSubsystem_eventIsIncludeActorBitwiseFlag_Parms
		{
			FGameplayTag _Tag;
			int32 _ActorBitwiseFlag;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__ActorBitwiseFlag_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp__ActorBitwiseFlag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_IsIncludeActorBitwiseFlag_Statics::NewProp__Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_IsIncludeActorBitwiseFlag_Statics::NewProp__Tag = { "_Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagActorBitwiseFlagSubsystem_eventIsIncludeActorBitwiseFlag_Parms, _Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_IsIncludeActorBitwiseFlag_Statics::NewProp__Tag_MetaData), Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_IsIncludeActorBitwiseFlag_Statics::NewProp__Tag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_IsIncludeActorBitwiseFlag_Statics::NewProp__ActorBitwiseFlag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_IsIncludeActorBitwiseFlag_Statics::NewProp__ActorBitwiseFlag = { "_ActorBitwiseFlag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagActorBitwiseFlagSubsystem_eventIsIncludeActorBitwiseFlag_Parms, _ActorBitwiseFlag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_IsIncludeActorBitwiseFlag_Statics::NewProp__ActorBitwiseFlag_MetaData), Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_IsIncludeActorBitwiseFlag_Statics::NewProp__ActorBitwiseFlag_MetaData) };
	void Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_IsIncludeActorBitwiseFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UCTagActorBitwiseFlagSubsystem_eventIsIncludeActorBitwiseFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_IsIncludeActorBitwiseFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCTagActorBitwiseFlagSubsystem_eventIsIncludeActorBitwiseFlag_Parms), &Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_IsIncludeActorBitwiseFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_IsIncludeActorBitwiseFlag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_IsIncludeActorBitwiseFlag_Statics::NewProp__Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_IsIncludeActorBitwiseFlag_Statics::NewProp__ActorBitwiseFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_IsIncludeActorBitwiseFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_IsIncludeActorBitwiseFlag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActorVariable" },
		{ "Comment", "// ex. 0100 | !(0100) -> 1111 : OK \n// ex. 0100 | !(0001) -> 1110 : NO\n// ex. 0010 | !(0001) -> 1110 : NO\n// ex. 0001 | !(0001) -> 1111 : OK\n// @return all flags met\n" },
		{ "GameplayTagFilter", "UC.Actor" },
		{ "ModuleRelativePath", "Public/UCTagActorBitwiseFlagSubsystem.h" },
		{ "ToolTip", "ex. 0100 | !(0100) -> 1111 : OK\nex. 0100 | !(0001) -> 1110 : NO\nex. 0010 | !(0001) -> 1110 : NO\nex. 0001 | !(0001) -> 1111 : OK\n@return all flags met" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_IsIncludeActorBitwiseFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem, nullptr, "IsIncludeActorBitwiseFlag", nullptr, nullptr, Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_IsIncludeActorBitwiseFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_IsIncludeActorBitwiseFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_IsIncludeActorBitwiseFlag_Statics::UCTagActorBitwiseFlagSubsystem_eventIsIncludeActorBitwiseFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_IsIncludeActorBitwiseFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_IsIncludeActorBitwiseFlag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_IsIncludeActorBitwiseFlag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_IsIncludeActorBitwiseFlag_Statics::UCTagActorBitwiseFlagSubsystem_eventIsIncludeActorBitwiseFlag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_IsIncludeActorBitwiseFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_IsIncludeActorBitwiseFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlag_Statics
	{
		struct UCTagActorBitwiseFlagSubsystem_eventSetActorBitwiseFlag_Parms
		{
			FGameplayTag _Tag;
			int32 _ActorBitwiseFlag;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__ActorBitwiseFlag_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp__ActorBitwiseFlag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlag_Statics::NewProp__Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlag_Statics::NewProp__Tag = { "_Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagActorBitwiseFlagSubsystem_eventSetActorBitwiseFlag_Parms, _Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlag_Statics::NewProp__Tag_MetaData), Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlag_Statics::NewProp__Tag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlag_Statics::NewProp__ActorBitwiseFlag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlag_Statics::NewProp__ActorBitwiseFlag = { "_ActorBitwiseFlag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagActorBitwiseFlagSubsystem_eventSetActorBitwiseFlag_Parms, _ActorBitwiseFlag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlag_Statics::NewProp__ActorBitwiseFlag_MetaData), Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlag_Statics::NewProp__ActorBitwiseFlag_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagActorBitwiseFlagSubsystem_eventSetActorBitwiseFlag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlag_Statics::NewProp__Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlag_Statics::NewProp__ActorBitwiseFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActorVariable" },
		{ "Comment", "// @return Value of the set flag\n" },
		{ "GameplayTagFilter", "UC.Actor" },
		{ "ModuleRelativePath", "Public/UCTagActorBitwiseFlagSubsystem.h" },
		{ "ToolTip", "@return Value of the set flag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem, nullptr, "SetActorBitwiseFlag", nullptr, nullptr, Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlag_Statics::UCTagActorBitwiseFlagSubsystem_eventSetActorBitwiseFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlag_Statics::UCTagActorBitwiseFlagSubsystem_eventSetActorBitwiseFlag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlagMap_Statics
	{
		struct UCTagActorBitwiseFlagSubsystem_eventSetActorBitwiseFlagMap_Parms
		{
			TMap<FGameplayTag,int32> __ActorBitwiseFlagMap;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp___ActorBitwiseFlagMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp___ActorBitwiseFlagMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp___ActorBitwiseFlagMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp___ActorBitwiseFlagMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlagMap_Statics::NewProp___ActorBitwiseFlagMap_ValueProp = { "__ActorBitwiseFlagMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlagMap_Statics::NewProp___ActorBitwiseFlagMap_Key_KeyProp = { "__ActorBitwiseFlagMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlagMap_Statics::NewProp___ActorBitwiseFlagMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlagMap_Statics::NewProp___ActorBitwiseFlagMap = { "__ActorBitwiseFlagMap", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagActorBitwiseFlagSubsystem_eventSetActorBitwiseFlagMap_Parms, __ActorBitwiseFlagMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlagMap_Statics::NewProp___ActorBitwiseFlagMap_MetaData), Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlagMap_Statics::NewProp___ActorBitwiseFlagMap_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlagMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlagMap_Statics::NewProp___ActorBitwiseFlagMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlagMap_Statics::NewProp___ActorBitwiseFlagMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlagMap_Statics::NewProp___ActorBitwiseFlagMap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlagMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActorVariable" },
		{ "ModuleRelativePath", "Public/UCTagActorBitwiseFlagSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlagMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem, nullptr, "SetActorBitwiseFlagMap", nullptr, nullptr, Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlagMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlagMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlagMap_Statics::UCTagActorBitwiseFlagSubsystem_eventSetActorBitwiseFlagMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlagMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlagMap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlagMap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlagMap_Statics::UCTagActorBitwiseFlagSubsystem_eventSetActorBitwiseFlagMap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlagMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlagMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SortedTags_Statics
	{
		struct UCTagActorBitwiseFlagSubsystem_eventSortedTags_Parms
		{
			TArray<FGameplayTag> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SortedTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SortedTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagActorBitwiseFlagSubsystem_eventSortedTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SortedTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SortedTags_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SortedTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SortedTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActorVariable" },
		{ "Comment", "// @return Array of sorted Key tags\n" },
		{ "GameplayTagFilter", "UC.Actor" },
		{ "ModuleRelativePath", "Public/UCTagActorBitwiseFlagSubsystem.h" },
		{ "ToolTip", "@return Array of sorted Key tags" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SortedTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem, nullptr, "SortedTags", nullptr, nullptr, Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SortedTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SortedTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SortedTags_Statics::UCTagActorBitwiseFlagSubsystem_eventSortedTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SortedTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SortedTags_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SortedTags_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SortedTags_Statics::UCTagActorBitwiseFlagSubsystem_eventSortedTags_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SortedTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SortedTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUCTagActorBitwiseFlagSubsystem);
	UClass* Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem_NoRegister()
	{
		return UUCTagActorBitwiseFlagSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnChangeActorBitwiseFlag_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChangeActorBitwiseFlag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GameActorBitwiseFlagMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameActorBitwiseFlagMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameActorBitwiseFlagMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_GameActorBitwiseFlagMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UcTagFlagsAndVars,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitFlipActorBitwiseFlag, "BitFlipActorBitwiseFlag" }, // 237209371
		{ &Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOffActorBitwiseFlag, "BitOffActorBitwiseFlag" }, // 3028777011
		{ &Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_BitOnActorBitwiseFlag, "BitOnActorBitwiseFlag" }, // 1438328360
		{ &Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlag, "GetActorBitwiseFlag" }, // 3067602791
		{ &Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_GetActorBitwiseFlagMap, "GetActorBitwiseFlagMap" }, // 502222203
		{ &Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_IsIncludeActorBitwiseFlag, "IsIncludeActorBitwiseFlag" }, // 3488561462
		{ &Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlag, "SetActorBitwiseFlag" }, // 2328790698
		{ &Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SetActorBitwiseFlagMap, "SetActorBitwiseFlagMap" }, // 1627729634
		{ &Z_Construct_UFunction_UUCTagActorBitwiseFlagSubsystem_SortedTags, "SortedTags" }, // 2026520906
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "UCTagActorBitwiseFlagSubsystem.h" },
		{ "ModuleRelativePath", "Public/UCTagActorBitwiseFlagSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem_Statics::NewProp_OnChangeActorBitwiseFlag_MetaData[] = {
		{ "Category", "EventDispatcher" },
		{ "Comment", "//------------------------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/UCTagActorBitwiseFlagSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem_Statics::NewProp_OnChangeActorBitwiseFlag = { "OnChangeActorBitwiseFlag", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUCTagActorBitwiseFlagSubsystem, OnChangeActorBitwiseFlag), Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeActorBitwiseFlagDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem_Statics::NewProp_OnChangeActorBitwiseFlag_MetaData), Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem_Statics::NewProp_OnChangeActorBitwiseFlag_MetaData) }; // 553961780
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem_Statics::NewProp_GameActorBitwiseFlagMap_ValueProp = { "GameActorBitwiseFlagMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem_Statics::NewProp_GameActorBitwiseFlagMap_Key_KeyProp = { "GameActorBitwiseFlagMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem_Statics::NewProp_GameActorBitwiseFlagMap_MetaData[] = {
		{ "Category", "ActorVariable" },
		{ "ModuleRelativePath", "Public/UCTagActorBitwiseFlagSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem_Statics::NewProp_GameActorBitwiseFlagMap = { "GameActorBitwiseFlagMap", nullptr, (EPropertyFlags)0x0020080001020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUCTagActorBitwiseFlagSubsystem, GameActorBitwiseFlagMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem_Statics::NewProp_GameActorBitwiseFlagMap_MetaData), Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem_Statics::NewProp_GameActorBitwiseFlagMap_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem_Statics::NewProp_OnChangeActorBitwiseFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem_Statics::NewProp_GameActorBitwiseFlagMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem_Statics::NewProp_GameActorBitwiseFlagMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem_Statics::NewProp_GameActorBitwiseFlagMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUCTagActorBitwiseFlagSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem_Statics::ClassParams = {
		&UUCTagActorBitwiseFlagSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem()
	{
		if (!Z_Registration_Info_UClass_UUCTagActorBitwiseFlagSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUCTagActorBitwiseFlagSubsystem.OuterSingleton, Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUCTagActorBitwiseFlagSubsystem.OuterSingleton;
	}
	template<> UCTAGFLAGSANDVARS_API UClass* StaticClass<UUCTagActorBitwiseFlagSubsystem>()
	{
		return UUCTagActorBitwiseFlagSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUCTagActorBitwiseFlagSubsystem);
	UUCTagActorBitwiseFlagSubsystem::~UUCTagActorBitwiseFlagSubsystem() {}
	struct Z_CompiledInDeferFile_FID_sachinashi_Unreal_Projects__plugin_OutOfLauncher_UcTagFlagsAndVars_HostProject_Plugins_UcTagFlagsAndVars_Source_UcTagFlagsAndVars_Public_UCTagActorBitwiseFlagSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sachinashi_Unreal_Projects__plugin_OutOfLauncher_UcTagFlagsAndVars_HostProject_Plugins_UcTagFlagsAndVars_Source_UcTagFlagsAndVars_Public_UCTagActorBitwiseFlagSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUCTagActorBitwiseFlagSubsystem, UUCTagActorBitwiseFlagSubsystem::StaticClass, TEXT("UUCTagActorBitwiseFlagSubsystem"), &Z_Registration_Info_UClass_UUCTagActorBitwiseFlagSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUCTagActorBitwiseFlagSubsystem), 1919304067U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sachinashi_Unreal_Projects__plugin_OutOfLauncher_UcTagFlagsAndVars_HostProject_Plugins_UcTagFlagsAndVars_Source_UcTagFlagsAndVars_Public_UCTagActorBitwiseFlagSubsystem_h_4196760280(TEXT("/Script/UcTagFlagsAndVars"),
		Z_CompiledInDeferFile_FID_sachinashi_Unreal_Projects__plugin_OutOfLauncher_UcTagFlagsAndVars_HostProject_Plugins_UcTagFlagsAndVars_Source_UcTagFlagsAndVars_Public_UCTagActorBitwiseFlagSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_sachinashi_Unreal_Projects__plugin_OutOfLauncher_UcTagFlagsAndVars_HostProject_Plugins_UcTagFlagsAndVars_Source_UcTagFlagsAndVars_Public_UCTagActorBitwiseFlagSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
