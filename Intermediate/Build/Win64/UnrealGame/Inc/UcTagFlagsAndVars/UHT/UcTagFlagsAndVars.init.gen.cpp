// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUcTagFlagsAndVars_init() {}
	UCTAGFLAGSANDVARS_API UFunction* Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeActorBitwiseFlagDelegate__DelegateSignature();
	UCTAGFLAGSANDVARS_API UFunction* Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeFlagDelegate__DelegateSignature();
	UCTAGFLAGSANDVARS_API UFunction* Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeVariableDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UcTagFlagsAndVars;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UcTagFlagsAndVars()
	{
		if (!Z_Registration_Info_UPackage__Script_UcTagFlagsAndVars.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeActorBitwiseFlagDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeFlagDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UcTagFlagsAndVars_ChangeVariableDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UcTagFlagsAndVars",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE2B291FA,
				0x678B77E2,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UcTagFlagsAndVars.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UcTagFlagsAndVars.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UcTagFlagsAndVars(Z_Construct_UPackage__Script_UcTagFlagsAndVars, TEXT("/Script/UcTagFlagsAndVars"), Z_Registration_Info_UPackage__Script_UcTagFlagsAndVars, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE2B291FA, 0x678B77E2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
