// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/KnightPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KNIGHT_KnightPlayerState_generated_h
#error "KnightPlayerState.generated.h already included, missing '#pragma once' in KnightPlayerState.h"
#endif
#define KNIGHT_KnightPlayerState_generated_h

#define FID_Knight_Source_Knight_Public_Character_KnightPlayerState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKnightPlayerState(); \
	friend struct Z_Construct_UClass_AKnightPlayerState_Statics; \
public: \
	DECLARE_CLASS(AKnightPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Knight"), NO_API) \
	DECLARE_SERIALIZER(AKnightPlayerState)


#define FID_Knight_Source_Knight_Public_Character_KnightPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AKnightPlayerState(AKnightPlayerState&&); \
	AKnightPlayerState(const AKnightPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKnightPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKnightPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKnightPlayerState) \
	NO_API virtual ~AKnightPlayerState();


#define FID_Knight_Source_Knight_Public_Character_KnightPlayerState_h_12_PROLOG
#define FID_Knight_Source_Knight_Public_Character_KnightPlayerState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Knight_Source_Knight_Public_Character_KnightPlayerState_h_15_INCLASS_NO_PURE_DECLS \
	FID_Knight_Source_Knight_Public_Character_KnightPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KNIGHT_API UClass* StaticClass<class AKnightPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Knight_Source_Knight_Public_Character_KnightPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
