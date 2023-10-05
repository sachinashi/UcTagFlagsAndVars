// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UcTagFlagsAndVars/Public/UCTagVarsSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUCTagVarsSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UCTAGFLAGSANDVARS_API UClass* Z_Construct_UClass_UUCTagVarsSubsystem();
	UCTAGFLAGSANDVARS_API UClass* Z_Construct_UClass_UUCTagVarsSubsystem_NoRegister();
	UCTAGFLAGSANDVARS_API UFunction* Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeVariableDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UcTagFlagsAndVars();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeVariableDelegate__DelegateSignature_Statics
	{
		struct _Script_UcTagFlagsAndVars_eventChangeVariableDelegate_Parms
		{
			FGameplayTag Tag;
			float Variable;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Variable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeVariableDelegate__DelegateSignature_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UcTagFlagsAndVars_eventChangeVariableDelegate_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeVariableDelegate__DelegateSignature_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UcTagFlagsAndVars_eventChangeVariableDelegate_Parms, Variable), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeVariableDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeVariableDelegate__DelegateSignature_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeVariableDelegate__DelegateSignature_Statics::NewProp_Variable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeVariableDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Event Dispatcher[OnChangeVariable]\n" },
		{ "ModuleRelativePath", "Public/UCTagVarsSubsystem.h" },
		{ "ToolTip", "Event Dispatcher[OnChangeVariable]" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeVariableDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UcTagFlagsAndVars, nullptr, "ChangeVariableDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeVariableDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeVariableDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeVariableDelegate__DelegateSignature_Statics::_Script_UcTagFlagsAndVars_eventChangeVariableDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeVariableDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeVariableDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeVariableDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeVariableDelegate__DelegateSignature_Statics::_Script_UcTagFlagsAndVars_eventChangeVariableDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeVariableDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeVariableDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FChangeVariableDelegate_DelegateWrapper(const FMulticastScriptDelegate& ChangeVariableDelegate, FGameplayTag Tag, float Variable)
{
	struct _Script_UcTagFlagsAndVars_eventChangeVariableDelegate_Parms
	{
		FGameplayTag Tag;
		float Variable;
	};
	_Script_UcTagFlagsAndVars_eventChangeVariableDelegate_Parms Parms;
	Parms.Tag=Tag;
	Parms.Variable=Variable;
	ChangeVariableDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UUCTagVarsSubsystem::execSortedTags)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FGameplayTag>*)Z_Param__Result=P_THIS->SortedTags();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUCTagVarsSubsystem::execAddVariable)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param__Tag);
		P_GET_PROPERTY(FFloatProperty,Z_Param__Variable);
		P_GET_PROPERTY(FFloatProperty,Z_Param__Error_Tolerance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->AddVariable(Z_Param__Tag,Z_Param__Variable,Z_Param__Error_Tolerance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUCTagVarsSubsystem::execSetVariableMap)
	{
		P_GET_TMAP(FGameplayTag,float,Z_Param__GameVariableMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableMap(Z_Param__GameVariableMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUCTagVarsSubsystem::execGetVariableMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FGameplayTag,float>*)Z_Param__Result=P_THIS->GetVariableMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUCTagVarsSubsystem::execSetVariable)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param__Tag);
		P_GET_PROPERTY(FFloatProperty,Z_Param__Variable);
		P_GET_PROPERTY(FFloatProperty,Z_Param__Error_Tolerance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->SetVariable(Z_Param__Tag,Z_Param__Variable,Z_Param__Error_Tolerance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUCTagVarsSubsystem::execGetVariable)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param__Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVariable(Z_Param__Tag);
		P_NATIVE_END;
	}
	void UUCTagVarsSubsystem::StaticRegisterNativesUUCTagVarsSubsystem()
	{
		UClass* Class = UUCTagVarsSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddVariable", &UUCTagVarsSubsystem::execAddVariable },
			{ "GetVariable", &UUCTagVarsSubsystem::execGetVariable },
			{ "GetVariableMap", &UUCTagVarsSubsystem::execGetVariableMap },
			{ "SetVariable", &UUCTagVarsSubsystem::execSetVariable },
			{ "SetVariableMap", &UUCTagVarsSubsystem::execSetVariableMap },
			{ "SortedTags", &UUCTagVarsSubsystem::execSortedTags },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUCTagVarsSubsystem_AddVariable_Statics
	{
		struct UCTagVarsSubsystem_eventAddVariable_Parms
		{
			FGameplayTag _Tag;
			float _Variable;
			float _Error_Tolerance;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Variable_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__Variable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Error_Tolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__Error_Tolerance;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagVarsSubsystem_AddVariable_Statics::NewProp__Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUCTagVarsSubsystem_AddVariable_Statics::NewProp__Tag = { "_Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagVarsSubsystem_eventAddVariable_Parms, _Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagVarsSubsystem_AddVariable_Statics::NewProp__Tag_MetaData), Z_Construct_UFunction_UUCTagVarsSubsystem_AddVariable_Statics::NewProp__Tag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagVarsSubsystem_AddVariable_Statics::NewProp__Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUCTagVarsSubsystem_AddVariable_Statics::NewProp__Variable = { "_Variable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagVarsSubsystem_eventAddVariable_Parms, _Variable), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagVarsSubsystem_AddVariable_Statics::NewProp__Variable_MetaData), Z_Construct_UFunction_UUCTagVarsSubsystem_AddVariable_Statics::NewProp__Variable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagVarsSubsystem_AddVariable_Statics::NewProp__Error_Tolerance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUCTagVarsSubsystem_AddVariable_Statics::NewProp__Error_Tolerance = { "_Error_Tolerance", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagVarsSubsystem_eventAddVariable_Parms, _Error_Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagVarsSubsystem_AddVariable_Statics::NewProp__Error_Tolerance_MetaData), Z_Construct_UFunction_UUCTagVarsSubsystem_AddVariable_Statics::NewProp__Error_Tolerance_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUCTagVarsSubsystem_AddVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagVarsSubsystem_eventAddVariable_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUCTagVarsSubsystem_AddVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagVarsSubsystem_AddVariable_Statics::NewProp__Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagVarsSubsystem_AddVariable_Statics::NewProp__Variable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagVarsSubsystem_AddVariable_Statics::NewProp__Error_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagVarsSubsystem_AddVariable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagVarsSubsystem_AddVariable_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "_Error_Tolerance" },
		{ "Category", "Variable" },
		{ "Comment", "// @return Value of the added Variable\n" },
		{ "CPP_Default__Error_Tolerance", "0.000001" },
		{ "GameplayTagFilter", "UC.Variable" },
		{ "ModuleRelativePath", "Public/UCTagVarsSubsystem.h" },
		{ "ToolTip", "@return Value of the added Variable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUCTagVarsSubsystem_AddVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUCTagVarsSubsystem, nullptr, "AddVariable", nullptr, nullptr, Z_Construct_UFunction_UUCTagVarsSubsystem_AddVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagVarsSubsystem_AddVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUCTagVarsSubsystem_AddVariable_Statics::UCTagVarsSubsystem_eventAddVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagVarsSubsystem_AddVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUCTagVarsSubsystem_AddVariable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagVarsSubsystem_AddVariable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUCTagVarsSubsystem_AddVariable_Statics::UCTagVarsSubsystem_eventAddVariable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUCTagVarsSubsystem_AddVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUCTagVarsSubsystem_AddVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariable_Statics
	{
		struct UCTagVarsSubsystem_eventGetVariable_Parms
		{
			FGameplayTag _Tag;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__Tag;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariable_Statics::NewProp__Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariable_Statics::NewProp__Tag = { "_Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagVarsSubsystem_eventGetVariable_Parms, _Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariable_Statics::NewProp__Tag_MetaData), Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariable_Statics::NewProp__Tag_MetaData) }; // 2083603574
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagVarsSubsystem_eventGetVariable_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariable_Statics::NewProp__Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variable" },
		{ "Comment", "// variable ------------------------------------------------------------------------\n// @return Value of the Variable\n" },
		{ "GameplayTagFilter", "UC.Variable" },
		{ "ModuleRelativePath", "Public/UCTagVarsSubsystem.h" },
		{ "ToolTip", "variable ------------------------------------------------------------------------\n@return Value of the Variable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUCTagVarsSubsystem, nullptr, "GetVariable", nullptr, nullptr, Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariable_Statics::UCTagVarsSubsystem_eventGetVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariable_Statics::UCTagVarsSubsystem_eventGetVariable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariableMap_Statics
	{
		struct UCTagVarsSubsystem_eventGetVariableMap_Parms
		{
			TMap<FGameplayTag,float> ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariableMap_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariableMap_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariableMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagVarsSubsystem_eventGetVariableMap_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariableMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariableMap_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariableMap_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariableMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariableMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/UCTagVarsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariableMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUCTagVarsSubsystem, nullptr, "GetVariableMap", nullptr, nullptr, Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariableMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariableMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariableMap_Statics::UCTagVarsSubsystem_eventGetVariableMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariableMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariableMap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariableMap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariableMap_Statics::UCTagVarsSubsystem_eventGetVariableMap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariableMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariableMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariable_Statics
	{
		struct UCTagVarsSubsystem_eventSetVariable_Parms
		{
			FGameplayTag _Tag;
			float _Variable;
			float _Error_Tolerance;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Variable_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__Variable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Error_Tolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__Error_Tolerance;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariable_Statics::NewProp__Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariable_Statics::NewProp__Tag = { "_Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagVarsSubsystem_eventSetVariable_Parms, _Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariable_Statics::NewProp__Tag_MetaData), Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariable_Statics::NewProp__Tag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariable_Statics::NewProp__Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariable_Statics::NewProp__Variable = { "_Variable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagVarsSubsystem_eventSetVariable_Parms, _Variable), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariable_Statics::NewProp__Variable_MetaData), Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariable_Statics::NewProp__Variable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariable_Statics::NewProp__Error_Tolerance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariable_Statics::NewProp__Error_Tolerance = { "_Error_Tolerance", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagVarsSubsystem_eventSetVariable_Parms, _Error_Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariable_Statics::NewProp__Error_Tolerance_MetaData), Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariable_Statics::NewProp__Error_Tolerance_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagVarsSubsystem_eventSetVariable_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariable_Statics::NewProp__Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariable_Statics::NewProp__Variable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariable_Statics::NewProp__Error_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariable_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "_Error_Tolerance" },
		{ "Category", "Variable" },
		{ "Comment", "// @return Value of the set Variable\n" },
		{ "CPP_Default__Error_Tolerance", "0.000001" },
		{ "GameplayTagFilter", "UC.Variable" },
		{ "ModuleRelativePath", "Public/UCTagVarsSubsystem.h" },
		{ "ToolTip", "@return Value of the set Variable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUCTagVarsSubsystem, nullptr, "SetVariable", nullptr, nullptr, Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariable_Statics::UCTagVarsSubsystem_eventSetVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariable_Statics::UCTagVarsSubsystem_eventSetVariable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariableMap_Statics
	{
		struct UCTagVarsSubsystem_eventSetVariableMap_Parms
		{
			TMap<FGameplayTag,float> _GameVariableMap;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp__GameVariableMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp__GameVariableMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__GameVariableMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp__GameVariableMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariableMap_Statics::NewProp__GameVariableMap_ValueProp = { "_GameVariableMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariableMap_Statics::NewProp__GameVariableMap_Key_KeyProp = { "_GameVariableMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariableMap_Statics::NewProp__GameVariableMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariableMap_Statics::NewProp__GameVariableMap = { "_GameVariableMap", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagVarsSubsystem_eventSetVariableMap_Parms, _GameVariableMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariableMap_Statics::NewProp__GameVariableMap_MetaData), Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariableMap_Statics::NewProp__GameVariableMap_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariableMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariableMap_Statics::NewProp__GameVariableMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariableMap_Statics::NewProp__GameVariableMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariableMap_Statics::NewProp__GameVariableMap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariableMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/UCTagVarsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariableMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUCTagVarsSubsystem, nullptr, "SetVariableMap", nullptr, nullptr, Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariableMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariableMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariableMap_Statics::UCTagVarsSubsystem_eventSetVariableMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariableMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariableMap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariableMap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariableMap_Statics::UCTagVarsSubsystem_eventSetVariableMap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariableMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariableMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUCTagVarsSubsystem_SortedTags_Statics
	{
		struct UCTagVarsSubsystem_eventSortedTags_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUCTagVarsSubsystem_SortedTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUCTagVarsSubsystem_SortedTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTagVarsSubsystem_eventSortedTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUCTagVarsSubsystem_SortedTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagVarsSubsystem_SortedTags_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUCTagVarsSubsystem_SortedTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUCTagVarsSubsystem_SortedTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variable" },
		{ "Comment", "// @return Array of sorted Key tags\n" },
		{ "GameplayTagFilter", "UC.Variable" },
		{ "ModuleRelativePath", "Public/UCTagVarsSubsystem.h" },
		{ "ToolTip", "@return Array of sorted Key tags" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUCTagVarsSubsystem_SortedTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUCTagVarsSubsystem, nullptr, "SortedTags", nullptr, nullptr, Z_Construct_UFunction_UUCTagVarsSubsystem_SortedTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagVarsSubsystem_SortedTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUCTagVarsSubsystem_SortedTags_Statics::UCTagVarsSubsystem_eventSortedTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagVarsSubsystem_SortedTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUCTagVarsSubsystem_SortedTags_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUCTagVarsSubsystem_SortedTags_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUCTagVarsSubsystem_SortedTags_Statics::UCTagVarsSubsystem_eventSortedTags_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUCTagVarsSubsystem_SortedTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUCTagVarsSubsystem_SortedTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUCTagVarsSubsystem);
	UClass* Z_Construct_UClass_UUCTagVarsSubsystem_NoRegister()
	{
		return UUCTagVarsSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UUCTagVarsSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnChangeVariable_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChangeVariable;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GameVariableMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameVariableMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameVariableMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_GameVariableMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUCTagVarsSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UcTagFlagsAndVars,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUCTagVarsSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUCTagVarsSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUCTagVarsSubsystem_AddVariable, "AddVariable" }, // 294698325
		{ &Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariable, "GetVariable" }, // 3091070478
		{ &Z_Construct_UFunction_UUCTagVarsSubsystem_GetVariableMap, "GetVariableMap" }, // 1512773160
		{ &Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariable, "SetVariable" }, // 2433924436
		{ &Z_Construct_UFunction_UUCTagVarsSubsystem_SetVariableMap, "SetVariableMap" }, // 3509853019
		{ &Z_Construct_UFunction_UUCTagVarsSubsystem_SortedTags, "SortedTags" }, // 88765624
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUCTagVarsSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUCTagVarsSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "UCTagVarsSubsystem.h" },
		{ "ModuleRelativePath", "Public/UCTagVarsSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUCTagVarsSubsystem_Statics::NewProp_OnChangeVariable_MetaData[] = {
		{ "Category", "EventDispatcher" },
		{ "Comment", "//------------------------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/UCTagVarsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUCTagVarsSubsystem_Statics::NewProp_OnChangeVariable = { "OnChangeVariable", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUCTagVarsSubsystem, OnChangeVariable), Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeVariableDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUCTagVarsSubsystem_Statics::NewProp_OnChangeVariable_MetaData), Z_Construct_UClass_UUCTagVarsSubsystem_Statics::NewProp_OnChangeVariable_MetaData) }; // 1527115414
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUCTagVarsSubsystem_Statics::NewProp_GameVariableMap_ValueProp = { "GameVariableMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUCTagVarsSubsystem_Statics::NewProp_GameVariableMap_Key_KeyProp = { "GameVariableMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUCTagVarsSubsystem_Statics::NewProp_GameVariableMap_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/UCTagVarsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUCTagVarsSubsystem_Statics::NewProp_GameVariableMap = { "GameVariableMap", nullptr, (EPropertyFlags)0x0020080001020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUCTagVarsSubsystem, GameVariableMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUCTagVarsSubsystem_Statics::NewProp_GameVariableMap_MetaData), Z_Construct_UClass_UUCTagVarsSubsystem_Statics::NewProp_GameVariableMap_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUCTagVarsSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUCTagVarsSubsystem_Statics::NewProp_OnChangeVariable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUCTagVarsSubsystem_Statics::NewProp_GameVariableMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUCTagVarsSubsystem_Statics::NewProp_GameVariableMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUCTagVarsSubsystem_Statics::NewProp_GameVariableMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUCTagVarsSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUCTagVarsSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUCTagVarsSubsystem_Statics::ClassParams = {
		&UUCTagVarsSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUCTagVarsSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUCTagVarsSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUCTagVarsSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UUCTagVarsSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUCTagVarsSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUCTagVarsSubsystem()
	{
		if (!Z_Registration_Info_UClass_UUCTagVarsSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUCTagVarsSubsystem.OuterSingleton, Z_Construct_UClass_UUCTagVarsSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUCTagVarsSubsystem.OuterSingleton;
	}
	template<> UCTAGFLAGSANDVARS_API UClass* StaticClass<UUCTagVarsSubsystem>()
	{
		return UUCTagVarsSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUCTagVarsSubsystem);
	UUCTagVarsSubsystem::~UUCTagVarsSubsystem() {}
	struct Z_CompiledInDeferFile_FID_sachinashi_Unreal_Projects__plugin_OutOfLauncher_UcTagFlagsAndVars_HostProject_Plugins_UcTagFlagsAndVars_Source_UcTagFlagsAndVars_Public_UCTagVarsSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sachinashi_Unreal_Projects__plugin_OutOfLauncher_UcTagFlagsAndVars_HostProject_Plugins_UcTagFlagsAndVars_Source_UcTagFlagsAndVars_Public_UCTagVarsSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUCTagVarsSubsystem, UUCTagVarsSubsystem::StaticClass, TEXT("UUCTagVarsSubsystem"), &Z_Registration_Info_UClass_UUCTagVarsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUCTagVarsSubsystem), 1321615971U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sachinashi_Unreal_Projects__plugin_OutOfLauncher_UcTagFlagsAndVars_HostProject_Plugins_UcTagFlagsAndVars_Source_UcTagFlagsAndVars_Public_UCTagVarsSubsystem_h_2018118058(TEXT("/Script/UcTagFlagsAndVars"),
		Z_CompiledInDeferFile_FID_sachinashi_Unreal_Projects__plugin_OutOfLauncher_UcTagFlagsAndVars_HostProject_Plugins_UcTagFlagsAndVars_Source_UcTagFlagsAndVars_Public_UCTagVarsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_sachinashi_Unreal_Projects__plugin_OutOfLauncher_UcTagFlagsAndVars_HostProject_Plugins_UcTagFlagsAndVars_Source_UcTagFlagsAndVars_Public_UCTagVarsSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
