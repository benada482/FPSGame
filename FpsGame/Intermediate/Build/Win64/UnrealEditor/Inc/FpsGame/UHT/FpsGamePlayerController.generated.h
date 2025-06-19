// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FpsGamePlayerController.h"

#ifdef FPSGAME_FpsGamePlayerController_generated_h
#error "FpsGamePlayerController.generated.h already included, missing '#pragma once' in FpsGamePlayerController.h"
#endif
#define FPSGAME_FpsGamePlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFpsGamePlayerController *************************************************
FPSGAME_API UClass* Z_Construct_UClass_AFpsGamePlayerController_NoRegister();

#define FID_FpsGame_Source_FpsGame_FpsGamePlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFpsGamePlayerController(); \
	friend struct Z_Construct_UClass_AFpsGamePlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FPSGAME_API UClass* Z_Construct_UClass_AFpsGamePlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AFpsGamePlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FpsGame"), Z_Construct_UClass_AFpsGamePlayerController_NoRegister) \
	DECLARE_SERIALIZER(AFpsGamePlayerController)


#define FID_FpsGame_Source_FpsGame_FpsGamePlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFpsGamePlayerController(AFpsGamePlayerController&&) = delete; \
	AFpsGamePlayerController(const AFpsGamePlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFpsGamePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFpsGamePlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AFpsGamePlayerController) \
	NO_API virtual ~AFpsGamePlayerController();


#define FID_FpsGame_Source_FpsGame_FpsGamePlayerController_h_16_PROLOG
#define FID_FpsGame_Source_FpsGame_FpsGamePlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FpsGame_Source_FpsGame_FpsGamePlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_FpsGame_Source_FpsGame_FpsGamePlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFpsGamePlayerController;

// ********** End Class AFpsGamePlayerController ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FpsGame_Source_FpsGame_FpsGamePlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
