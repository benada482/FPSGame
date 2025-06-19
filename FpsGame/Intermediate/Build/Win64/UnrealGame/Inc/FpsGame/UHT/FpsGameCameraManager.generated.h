// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FpsGameCameraManager.h"

#ifdef FPSGAME_FpsGameCameraManager_generated_h
#error "FpsGameCameraManager.generated.h already included, missing '#pragma once' in FpsGameCameraManager.h"
#endif
#define FPSGAME_FpsGameCameraManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFpsGameCameraManager ****************************************************
FPSGAME_API UClass* Z_Construct_UClass_AFpsGameCameraManager_NoRegister();

#define FID_FpsGame_Source_FpsGame_FpsGameCameraManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFpsGameCameraManager(); \
	friend struct Z_Construct_UClass_AFpsGameCameraManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FPSGAME_API UClass* Z_Construct_UClass_AFpsGameCameraManager_NoRegister(); \
public: \
	DECLARE_CLASS2(AFpsGameCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FpsGame"), Z_Construct_UClass_AFpsGameCameraManager_NoRegister) \
	DECLARE_SERIALIZER(AFpsGameCameraManager)


#define FID_FpsGame_Source_FpsGame_FpsGameCameraManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFpsGameCameraManager(AFpsGameCameraManager&&) = delete; \
	AFpsGameCameraManager(const AFpsGameCameraManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFpsGameCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFpsGameCameraManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFpsGameCameraManager) \
	NO_API virtual ~AFpsGameCameraManager();


#define FID_FpsGame_Source_FpsGame_FpsGameCameraManager_h_13_PROLOG
#define FID_FpsGame_Source_FpsGame_FpsGameCameraManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FpsGame_Source_FpsGame_FpsGameCameraManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_FpsGame_Source_FpsGame_FpsGameCameraManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFpsGameCameraManager;

// ********** End Class AFpsGameCameraManager ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FpsGame_Source_FpsGame_FpsGameCameraManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
