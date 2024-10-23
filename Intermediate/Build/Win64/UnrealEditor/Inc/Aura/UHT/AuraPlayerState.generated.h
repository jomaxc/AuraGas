// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/AuraPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AURA_AuraPlayerState_generated_h
#error "AuraPlayerState.generated.h already included, missing '#pragma once' in AuraPlayerState.h"
#endif
#define AURA_AuraPlayerState_generated_h

#define FID_Udemy_AuraGAS_Source_Aura_Public_Player_AuraPlayerState_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAuraPlayerState(); \
	friend struct Z_Construct_UClass_AAuraPlayerState_Statics; \
public: \
	DECLARE_CLASS(AAuraPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(AAuraPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<AAuraPlayerState*>(this); }


#define FID_Udemy_AuraGAS_Source_Aura_Public_Player_AuraPlayerState_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAuraPlayerState(AAuraPlayerState&&); \
	AAuraPlayerState(const AAuraPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAuraPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAuraPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAuraPlayerState) \
	NO_API virtual ~AAuraPlayerState();


#define FID_Udemy_AuraGAS_Source_Aura_Public_Player_AuraPlayerState_h_16_PROLOG
#define FID_Udemy_AuraGAS_Source_Aura_Public_Player_AuraPlayerState_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Udemy_AuraGAS_Source_Aura_Public_Player_AuraPlayerState_h_19_INCLASS_NO_PURE_DECLS \
	FID_Udemy_AuraGAS_Source_Aura_Public_Player_AuraPlayerState_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class AAuraPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Udemy_AuraGAS_Source_Aura_Public_Player_AuraPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
