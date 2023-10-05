// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UcTagFlagsAndVars/Public/UCTagFlagsSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUCTagFlagsSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UCTAGFLAGSANDVARS_API UClass* Z_Construct_UClass_UUCTagFlagsSubsystem();
	UCTAGFLAGSANDVARS_API UClass* Z_Construct_UClass_UUCTagFlagsSubsystem_NoRegister();
	UCTAGFLAGSANDVARS_API UFunction* Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeFlagDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UcTagFlagsAndVars();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeFlagDelegate__DelegateSignature_Statics
	{
		struct _Script_UcTagFlagsAndVars_eventChangeFlagDelegate_Parms
		{
			FGameplayTag Tag;
			bool Flag;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static void NewProp_Flag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Flag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeFlagDelegate__DelegateSignature_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UcTagFlagsAndVars_eventChangeFlagDelegate_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	void Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeFlagDelegate__DelegateSignature_Statics::NewProp_Flag_SetBit(void* Obj)
	{
		((_Script_UcTagFlagsAndVars_eventChangeFlagDelegate_Parms*)Obj)->Flag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeFlagDelegate__DelegateSignature_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_UcTagFlagsAndVars_eventChangeFlagDelegate_Parms), &Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeFlagDelegate__DelegateSignature_Statics::NewProp_Flag_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeFlagDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeFlagDelegate__DelegateSignature_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeFlagDelegate__DelegateSignature_Statics::NewProp_Flag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeFlagDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Event Dispatcher[OnChangeFlag]\n" },
		{ "ModuleRelativePath", "Public/UCTagFlagsSubsystem.h" },
		{ "ToolTip", "Event Dispatcher[OnChangeFlag]" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeFlagDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UcTagFlagsAndVars, nullptr, "ChangeFlagDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeFlagDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeFlagDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeFlagDelegate__DelegateSignature_Statics::_Script_UcTagFlagsAndVars_eventChangeFlagDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeFlagDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeFlagDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeFlagDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeFlagDelegate__DelegateSignature_Statics::_Script_UcTagFlagsAndVars_eventChangeFlagDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeFlagDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeFlagDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FChangeFlagDelegate_DelegateWrapper(const FMulticastScriptDelegate& ChangeFlagDelegate, FGameplayTag Tag, bool Flag)
{
	struct _Script_UcTagFlagsAndVars_eventChangeFlagDelegate_Parms
	{
		FGameplayTag Tag;
		bool Flag;
	};
	_Script_UcTagFlagsAndVars_eventChangeFlagDelegate_Parms Parms;
	Parms.Tag=Tag;
	Parms.Flag=Flag ? true : false;
	ChangeFlagDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UUCTagFlagsSubsystem::execSortedTags)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FGameplayTag>*)Z_Param__Result=P_THIS->SortedTags();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUCTagFlagsSubsystem::execSetFlagFlip)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param__Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetFlagFlip(Z_Param__Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUCTagFlagsSubsystem::execSetFlagMap)
	{
		P_GET_TMAP(FGameplayTag,bool,Z_Param__GameFlagMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFlagMap(Z_Param__GameFlagMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUCTagFlagsSubsystem::execGetFlagMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FGameplayTag,bool>*)Z_Param__Result=P_THIS->GetFlagMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUCTagFlagsSubsystem::execSetFlag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param__Tag);
		P_GET_UBOOL(Z_Param__Flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetFlag(Z_Param__Tag,Z_Param__Flag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUCTagFlagsSubsystem::execGetFlag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param__Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFlag(Z_Param__Tag);
		P_NATIVE_END;
	}
	void UUCTagFlagsSubsystem::StaticRegisterNativesUUCTagFlagsSubsystem()
	{
		UClass* Class = UUCTagFlagsSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFlag", &UUCTagFlagsSubsystem::execGetFlag },
			{ "GetFlagMap", &UUCTagFlagsSubsystem::execGetFlagMap },
			{ "SetFlag", &UUCTagFlagsSubsystem::execSetFlag },
			{ "SetFlagFlip", &UUCTagFlagsSubsystem::execSetFlagFlip },
			{ "SetFlagMap", &UUCTagFlagsSubsystem::execSetFlagMap },
			{ "SortedTags", &UUCTagFlagsSubsystem::execSortedTags },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlag_Statics
	{
		struct UCTagFlagsSubsystem_eventGetFlag_Parms
		{
			FGameplayTag _Tag;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__Tag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlag_Statics::NewProp__Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlag_Statics::NewProp__Tag = { "_Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagFlagsSubsystem_eventGetFlag_Parms, _Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlag_Statics::NewProp__Tag_MetaData), Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlag_Statics::NewProp__Tag_MetaData) }; // 2083603574
	void Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UCTagFlagsSubsystem_eventGetFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCTagFlagsSubsystem_eventGetFlag_Parms), &Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlag_Statics::NewProp__Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "Comment", "// flag ------------------------------------------------------------------------\n// @return Value of the flag\n" },
		{ "GameplayTagFilter", "UC.Flag" },
		{ "ModuleRelativePath", "Public/UCTagFlagsSubsystem.h" },
		{ "ToolTip", "flag ------------------------------------------------------------------------\n@return Value of the flag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUCTagFlagsSubsystem, nullptr, "GetFlag", nullptr, nullptr, Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlag_Statics::UCTagFlagsSubsystem_eventGetFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlag_Statics::UCTagFlagsSubsystem_eventGetFlag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlagMap_Statics
	{
		struct UCTagFlagsSubsystem_eventGetFlagMap_Parms
		{
			TMap<FGameplayTag,bool> ReturnValue;
		};
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlagMap_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlagMap_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlagMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagFlagsSubsystem_eventGetFlagMap_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlagMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlagMap_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlagMap_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlagMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlagMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/UCTagFlagsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlagMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUCTagFlagsSubsystem, nullptr, "GetFlagMap", nullptr, nullptr, Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlagMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlagMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlagMap_Statics::UCTagFlagsSubsystem_eventGetFlagMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlagMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlagMap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlagMap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlagMap_Statics::UCTagFlagsSubsystem_eventGetFlagMap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlagMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlagMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlag_Statics
	{
		struct UCTagFlagsSubsystem_eventSetFlag_Parms
		{
			FGameplayTag _Tag;
			bool _Flag;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Flag_MetaData[];
#endif
		static void NewProp__Flag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp__Flag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlag_Statics::NewProp__Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlag_Statics::NewProp__Tag = { "_Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagFlagsSubsystem_eventSetFlag_Parms, _Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlag_Statics::NewProp__Tag_MetaData), Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlag_Statics::NewProp__Tag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlag_Statics::NewProp__Flag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlag_Statics::NewProp__Flag_SetBit(void* Obj)
	{
		((UCTagFlagsSubsystem_eventSetFlag_Parms*)Obj)->_Flag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlag_Statics::NewProp__Flag = { "_Flag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCTagFlagsSubsystem_eventSetFlag_Parms), &Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlag_Statics::NewProp__Flag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlag_Statics::NewProp__Flag_MetaData), Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlag_Statics::NewProp__Flag_MetaData) };
	void Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UCTagFlagsSubsystem_eventSetFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCTagFlagsSubsystem_eventSetFlag_Parms), &Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlag_Statics::NewProp__Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlag_Statics::NewProp__Flag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "Comment", "// @return Value of the set flag\n" },
		{ "GameplayTagFilter", "UC.Flag" },
		{ "ModuleRelativePath", "Public/UCTagFlagsSubsystem.h" },
		{ "ToolTip", "@return Value of the set flag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUCTagFlagsSubsystem, nullptr, "SetFlag", nullptr, nullptr, Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlag_Statics::UCTagFlagsSubsystem_eventSetFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlag_Statics::UCTagFlagsSubsystem_eventSetFlag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagFlip_Statics
	{
		struct UCTagFlagsSubsystem_eventSetFlagFlip_Parms
		{
			FGameplayTag _Tag;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__Tag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagFlip_Statics::NewProp__Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagFlip_Statics::NewProp__Tag = { "_Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagFlagsSubsystem_eventSetFlagFlip_Parms, _Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagFlip_Statics::NewProp__Tag_MetaData), Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagFlip_Statics::NewProp__Tag_MetaData) }; // 2083603574
	void Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagFlip_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UCTagFlagsSubsystem_eventSetFlagFlip_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagFlip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCTagFlagsSubsystem_eventSetFlagFlip_Parms), &Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagFlip_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagFlip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagFlip_Statics::NewProp__Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagFlip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagFlip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "Comment", "// @return Value of Flipped Flag\n" },
		{ "GameplayTagFilter", "UC.Flag" },
		{ "ModuleRelativePath", "Public/UCTagFlagsSubsystem.h" },
		{ "ToolTip", "@return Value of Flipped Flag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagFlip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUCTagFlagsSubsystem, nullptr, "SetFlagFlip", nullptr, nullptr, Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagFlip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagFlip_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagFlip_Statics::UCTagFlagsSubsystem_eventSetFlagFlip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagFlip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagFlip_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagFlip_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagFlip_Statics::UCTagFlagsSubsystem_eventSetFlagFlip_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagFlip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagFlip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagMap_Statics
	{
		struct UCTagFlagsSubsystem_eventSetFlagMap_Parms
		{
			TMap<FGameplayTag,bool> _GameFlagMap;
		};
		static const UECodeGen_Private::FBoolPropertyParams NewProp__GameFlagMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp__GameFlagMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__GameFlagMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp__GameFlagMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagMap_Statics::NewProp__GameFlagMap_ValueProp = { "_GameFlagMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagMap_Statics::NewProp__GameFlagMap_Key_KeyProp = { "_GameFlagMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagMap_Statics::NewProp__GameFlagMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagMap_Statics::NewProp__GameFlagMap = { "_GameFlagMap", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagFlagsSubsystem_eventSetFlagMap_Parms, _GameFlagMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagMap_Statics::NewProp__GameFlagMap_MetaData), Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagMap_Statics::NewProp__GameFlagMap_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagMap_Statics::NewProp__GameFlagMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagMap_Statics::NewProp__GameFlagMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagMap_Statics::NewProp__GameFlagMap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/UCTagFlagsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUCTagFlagsSubsystem, nullptr, "SetFlagMap", nullptr, nullptr, Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagMap_Statics::UCTagFlagsSubsystem_eventSetFlagMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagMap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagMap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagMap_Statics::UCTagFlagsSubsystem_eventSetFlagMap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUCTagFlagsSubsystem_SortedTags_Statics
	{
		struct UCTagFlagsSubsystem_eventSortedTags_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUCTagFlagsSubsystem_SortedTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUCTagFlagsSubsystem_SortedTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagFlagsSubsystem_eventSortedTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUCTagFlagsSubsystem_SortedTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagFlagsSubsystem_SortedTags_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagFlagsSubsystem_SortedTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagFlagsSubsystem_SortedTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "Comment", "// @return Array of sorted Key tags\n" },
		{ "GameplayTagFilter", "UC.Flag" },
		{ "ModuleRelativePath", "Public/UCTagFlagsSubsystem.h" },
		{ "ToolTip", "@return Array of sorted Key tags" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUCTagFlagsSubsystem_SortedTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUCTagFlagsSubsystem, nullptr, "SortedTags", nullptr, nullptr, Z_Construct_UFunction_UUCTagFlagsSubsystem_SortedTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagFlagsSubsystem_SortedTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUCTagFlagsSubsystem_SortedTags_Statics::UCTagFlagsSubsystem_eventSortedTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagFlagsSubsystem_SortedTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUCTagFlagsSubsystem_SortedTags_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagFlagsSubsystem_SortedTags_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUCTagFlagsSubsystem_SortedTags_Statics::UCTagFlagsSubsystem_eventSortedTags_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUCTagFlagsSubsystem_SortedTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUCTagFlagsSubsystem_SortedTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUCTagFlagsSubsystem);
	UClass* Z_Construct_UClass_UUCTagFlagsSubsystem_NoRegister()
	{
		return UUCTagFlagsSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UUCTagFlagsSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnChangeFlag_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChangeFlag;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_GameFlagMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameFlagMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameFlagMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_GameFlagMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUCTagFlagsSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UcTagFlagsAndVars,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUCTagFlagsSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUCTagFlagsSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlag, "GetFlag" }, // 1842125688
		{ &Z_Construct_UFunction_UUCTagFlagsSubsystem_GetFlagMap, "GetFlagMap" }, // 98684065
		{ &Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlag, "SetFlag" }, // 2462065250
		{ &Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagFlip, "SetFlagFlip" }, // 4294599269
		{ &Z_Construct_UFunction_UUCTagFlagsSubsystem_SetFlagMap, "SetFlagMap" }, // 3131643757
		{ &Z_Construct_UFunction_UUCTagFlagsSubsystem_SortedTags, "SortedTags" }, // 1005850598
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUCTagFlagsSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUCTagFlagsSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "UCTagFlagsSubsystem.h" },
		{ "ModuleRelativePath", "Public/UCTagFlagsSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUCTagFlagsSubsystem_Statics::NewProp_OnChangeFlag_MetaData[] = {
		{ "Category", "EventDispatcher" },
		{ "Comment", "//------------------------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/UCTagFlagsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUCTagFlagsSubsystem_Statics::NewProp_OnChangeFlag = { "OnChangeFlag", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUCTagFlagsSubsystem, OnChangeFlag), Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeFlagDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUCTagFlagsSubsystem_Statics::NewProp_OnChangeFlag_MetaData), Z_Construct_UClass_UUCTagFlagsSubsystem_Statics::NewProp_OnChangeFlag_MetaData) }; // 2018990256
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUCTagFlagsSubsystem_Statics::NewProp_GameFlagMap_ValueProp = { "GameFlagMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUCTagFlagsSubsystem_Statics::NewProp_GameFlagMap_Key_KeyProp = { "GameFlagMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUCTagFlagsSubsystem_Statics::NewProp_GameFlagMap_MetaData[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/UCTagFlagsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUCTagFlagsSubsystem_Statics::NewProp_GameFlagMap = { "GameFlagMap", nullptr, (EPropertyFlags)0x0020080001020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUCTagFlagsSubsystem, GameFlagMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUCTagFlagsSubsystem_Statics::NewProp_GameFlagMap_MetaData), Z_Construct_UClass_UUCTagFlagsSubsystem_Statics::NewProp_GameFlagMap_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUCTagFlagsSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUCTagFlagsSubsystem_Statics::NewProp_OnChangeFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUCTagFlagsSubsystem_Statics::NewProp_GameFlagMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUCTagFlagsSubsystem_Statics::NewProp_GameFlagMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUCTagFlagsSubsystem_Statics::NewProp_GameFlagMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUCTagFlagsSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUCTagFlagsSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUCTagFlagsSubsystem_Statics::ClassParams = {
		&UUCTagFlagsSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUCTagFlagsSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUCTagFlagsSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUCTagFlagsSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UUCTagFlagsSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUCTagFlagsSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUCTagFlagsSubsystem()
	{
		if (!Z_Registration_Info_UClass_UUCTagFlagsSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUCTagFlagsSubsystem.OuterSingleton, Z_Construct_UClass_UUCTagFlagsSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUCTagFlagsSubsystem.OuterSingleton;
	}
	template<> UCTAGFLAGSANDVARS_API UClass* StaticClass<UUCTagFlagsSubsystem>()
	{
		return UUCTagFlagsSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUCTagFlagsSubsystem);
	UUCTagFlagsSubsystem::~UUCTagFlagsSubsystem() {}
	struct Z_CompiledInDeferFile_FID_sachinashi_Unreal_Projects__plugin_OutOfLauncher_UcTagFlagsAndVars_HostProject_Plugins_UcTagFlagsAndVars_Source_UcTagFlagsAndVars_Public_UCTagFlagsSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sachinashi_Unreal_Projects__plugin_OutOfLauncher_UcTagFlagsAndVars_HostProject_Plugins_UcTagFlagsAndVars_Source_UcTagFlagsAndVars_Public_UCTagFlagsSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUCTagFlagsSubsystem, UUCTagFlagsSubsystem::StaticClass, TEXT("UUCTagFlagsSubsystem"), &Z_Registration_Info_UClass_UUCTagFlagsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUCTagFlagsSubsystem), 2048088135U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sachinashi_Unreal_Projects__plugin_OutOfLauncher_UcTagFlagsAndVars_HostProject_Plugins_UcTagFlagsAndVars_Source_UcTagFlagsAndVars_Public_UCTagFlagsSubsystem_h_780519326(TEXT("/Script/UcTagFlagsAndVars"),
		Z_CompiledInDeferFile_FID_sachinashi_Unreal_Projects__plugin_OutOfLauncher_UcTagFlagsAndVars_HostProject_Plugins_UcTagFlagsAndVars_Source_UcTagFlagsAndVars_Public_UCTagFlagsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_sachinashi_Unreal_Projects__plugin_OutOfLauncher_UcTagFlagsAndVars_HostProject_Plugins_UcTagFlagsAndVars_Source_UcTagFlagsAndVars_Public_UCTagFlagsSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
