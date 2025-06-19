// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FpsGame/FpsGameGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFpsGameGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FPSGAME_API UClass* Z_Construct_UClass_AFpsGameGameMode();
FPSGAME_API UClass* Z_Construct_UClass_AFpsGameGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_FpsGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFpsGameGameMode *********************************************************
void AFpsGameGameMode::StaticRegisterNativesAFpsGameGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFpsGameGameMode;
UClass* AFpsGameGameMode::GetPrivateStaticClass()
{
	using TClass = AFpsGameGameMode;
	if (!Z_Registration_Info_UClass_AFpsGameGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FpsGameGameMode"),
			Z_Registration_Info_UClass_AFpsGameGameMode.InnerSingleton,
			StaticRegisterNativesAFpsGameGameMode,
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
	return Z_Registration_Info_UClass_AFpsGameGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AFpsGameGameMode_NoRegister()
{
	return AFpsGameGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFpsGameGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FpsGameGameMode.h" },
		{ "ModuleRelativePath", "FpsGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFpsGameGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFpsGameGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FpsGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFpsGameGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFpsGameGameMode_Statics::ClassParams = {
	&AFpsGameGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFpsGameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFpsGameGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFpsGameGameMode()
{
	if (!Z_Registration_Info_UClass_AFpsGameGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFpsGameGameMode.OuterSingleton, Z_Construct_UClass_AFpsGameGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFpsGameGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFpsGameGameMode);
AFpsGameGameMode::~AFpsGameGameMode() {}
// ********** End Class AFpsGameGameMode ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FpsGame_Source_FpsGame_FpsGameGameMode_h__Script_FpsGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFpsGameGameMode, AFpsGameGameMode::StaticClass, TEXT("AFpsGameGameMode"), &Z_Registration_Info_UClass_AFpsGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFpsGameGameMode), 4126929959U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FpsGame_Source_FpsGame_FpsGameGameMode_h__Script_FpsGame_1686387318(TEXT("/Script/FpsGame"),
	Z_CompiledInDeferFile_FID_FpsGame_Source_FpsGame_FpsGameGameMode_h__Script_FpsGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FpsGame_Source_FpsGame_FpsGameGameMode_h__Script_FpsGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
