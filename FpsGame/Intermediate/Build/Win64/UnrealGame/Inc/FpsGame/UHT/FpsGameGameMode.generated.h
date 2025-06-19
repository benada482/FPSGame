// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FpsGameGameMode.h"

#ifdef FPSGAME_FpsGameGameMode_generated_h
#error "FpsGameGameMode.generated.h already included, missing '#pragma once' in FpsGameGameMode.h"
#endif
#define FPSGAME_FpsGameGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFpsGameGameMode *********************************************************
FPSGAME_API UClass* Z_Construct_UClass_AFpsGameGameMode_NoRegister();

#define FID_FpsGame_Source_FpsGame_FpsGameGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFpsGameGameMode(); \
	friend struct Z_Construct_UClass_AFpsGameGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FPSGAME_API UClass* Z_Construct_UClass_AFpsGameGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AFpsGameGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FpsGame"), Z_Construct_UClass_AFpsGameGameMode_NoRegister) \
	DECLARE_SERIALIZER(AFpsGameGameMode)


#define FID_FpsGame_Source_FpsGame_FpsGameGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFpsGameGameMode(AFpsGameGameMode&&) = delete; \
	AFpsGameGameMode(const AFpsGameGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFpsGameGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFpsGameGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AFpsGameGameMode) \
	NO_API virtual ~AFpsGameGameMode();


#define FID_FpsGame_Source_FpsGame_FpsGameGameMode_h_12_PROLOG
#define FID_FpsGame_Source_FpsGame_FpsGameGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FpsGame_Source_FpsGame_FpsGameGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_FpsGame_Source_FpsGame_FpsGameGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFpsGameGameMode;

// ********** End Class AFpsGameGameMode ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FpsGame_Source_FpsGame_FpsGameGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
