// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFpsGame_init() {}
	FPSGAME_API UFunction* Z_Construct_UDelegateFunction_FpsGame_BulletCountUpdatedDelegate__DelegateSignature();
	FPSGAME_API UFunction* Z_Construct_UDelegateFunction_FpsGame_PawnDeathDelegate__DelegateSignature();
	FPSGAME_API UFunction* Z_Construct_UDelegateFunction_FpsGame_SprintStateChangedDelegate__DelegateSignature();
	FPSGAME_API UFunction* Z_Construct_UDelegateFunction_FpsGame_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FpsGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FpsGame()
	{
		if (!Z_Registration_Info_UPackage__Script_FpsGame.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_FpsGame_BulletCountUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FpsGame_PawnDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FpsGame_SprintStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FpsGame_UpdateSprintMeterDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FpsGame",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xFB55270D,
				0x4BB3B7D1,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FpsGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FpsGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FpsGame(Z_Construct_UPackage__Script_FpsGame, TEXT("/Script/FpsGame"), Z_Registration_Info_UPackage__Script_FpsGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFB55270D, 0x4BB3B7D1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
