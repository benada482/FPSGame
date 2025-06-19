// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FpsGame/FpsGameCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFpsGameCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
FPSGAME_API UClass* Z_Construct_UClass_AFpsGameCameraManager();
FPSGAME_API UClass* Z_Construct_UClass_AFpsGameCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_FpsGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFpsGameCameraManager ****************************************************
void AFpsGameCameraManager::StaticRegisterNativesAFpsGameCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFpsGameCameraManager;
UClass* AFpsGameCameraManager::GetPrivateStaticClass()
{
	using TClass = AFpsGameCameraManager;
	if (!Z_Registration_Info_UClass_AFpsGameCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FpsGameCameraManager"),
			Z_Registration_Info_UClass_AFpsGameCameraManager.InnerSingleton,
			StaticRegisterNativesAFpsGameCameraManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AFpsGameCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AFpsGameCameraManager_NoRegister()
{
	return AFpsGameCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFpsGameCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "FpsGameCameraManager.h" },
		{ "ModuleRelativePath", "FpsGameCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFpsGameCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFpsGameCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_FpsGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFpsGameCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFpsGameCameraManager_Statics::ClassParams = {
	&AFpsGameCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFpsGameCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AFpsGameCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFpsGameCameraManager()
{
	if (!Z_Registration_Info_UClass_AFpsGameCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFpsGameCameraManager.OuterSingleton, Z_Construct_UClass_AFpsGameCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFpsGameCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFpsGameCameraManager);
AFpsGameCameraManager::~AFpsGameCameraManager() {}
// ********** End Class AFpsGameCameraManager ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FpsGame_Source_FpsGame_FpsGameCameraManager_h__Script_FpsGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFpsGameCameraManager, AFpsGameCameraManager::StaticClass, TEXT("AFpsGameCameraManager"), &Z_Registration_Info_UClass_AFpsGameCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFpsGameCameraManager), 1497821594U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FpsGame_Source_FpsGame_FpsGameCameraManager_h__Script_FpsGame_3286375991(TEXT("/Script/FpsGame"),
	Z_CompiledInDeferFile_FID_FpsGame_Source_FpsGame_FpsGameCameraManager_h__Script_FpsGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FpsGame_Source_FpsGame_FpsGameCameraManager_h__Script_FpsGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
