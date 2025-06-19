// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FpsGameCharacter.h"

#ifdef FPSGAME_FpsGameCharacter_generated_h
#error "FpsGameCharacter.generated.h already included, missing '#pragma once' in FpsGameCharacter.h"
#endif
#define FPSGAME_FpsGameCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFpsGameCharacter ********************************************************
#define FID_FpsGame_Source_FpsGame_FpsGameCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateGameSession); \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


FPSGAME_API UClass* Z_Construct_UClass_AFpsGameCharacter_NoRegister();

#define FID_FpsGame_Source_FpsGame_FpsGameCharacter_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFpsGameCharacter(); \
	friend struct Z_Construct_UClass_AFpsGameCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FPSGAME_API UClass* Z_Construct_UClass_AFpsGameCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AFpsGameCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FpsGame"), Z_Construct_UClass_AFpsGameCharacter_NoRegister) \
	DECLARE_SERIALIZER(AFpsGameCharacter)


#define FID_FpsGame_Source_FpsGame_FpsGameCharacter_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFpsGameCharacter(AFpsGameCharacter&&) = delete; \
	AFpsGameCharacter(const AFpsGameCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFpsGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFpsGameCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AFpsGameCharacter) \
	NO_API virtual ~AFpsGameCharacter();


#define FID_FpsGame_Source_FpsGame_FpsGameCharacter_h_22_PROLOG
#define FID_FpsGame_Source_FpsGame_FpsGameCharacter_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FpsGame_Source_FpsGame_FpsGameCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FpsGame_Source_FpsGame_FpsGameCharacter_h_25_INCLASS_NO_PURE_DECLS \
	FID_FpsGame_Source_FpsGame_FpsGameCharacter_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFpsGameCharacter;

// ********** End Class AFpsGameCharacter **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FpsGame_Source_FpsGame_FpsGameCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
