// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/AuraCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AURA_AuraCharacter_generated_h
#error "AuraCharacter.generated.h already included, missing '#pragma once' in AuraCharacter.h"
#endif
#define AURA_AuraCharacter_generated_h

#define FID_Udemy_AuraGas_Source_Aura_Public_Character_AuraCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastLevelUpParticles_Implementation() const; \
	DECLARE_FUNCTION(execMulticastLevelUpParticles); \
	DECLARE_FUNCTION(execSetInShockLoop); \
	DECLARE_FUNCTION(execGetInShockLoop);


#define FID_Udemy_AuraGas_Source_Aura_Public_Character_AuraCharacter_h_20_CALLBACK_WRAPPERS
#define FID_Udemy_AuraGas_Source_Aura_Public_Character_AuraCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAuraCharacter(); \
	friend struct Z_Construct_UClass_AAuraCharacter_Statics; \
public: \
	DECLARE_CLASS(AAuraCharacter, AAuraCharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(AAuraCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AAuraCharacter*>(this); }


#define FID_Udemy_AuraGas_Source_Aura_Public_Character_AuraCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAuraCharacter(AAuraCharacter&&); \
	AAuraCharacter(const AAuraCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAuraCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAuraCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAuraCharacter) \
	NO_API virtual ~AAuraCharacter();


#define FID_Udemy_AuraGas_Source_Aura_Public_Character_AuraCharacter_h_17_PROLOG
#define FID_Udemy_AuraGas_Source_Aura_Public_Character_AuraCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Udemy_AuraGas_Source_Aura_Public_Character_AuraCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Udemy_AuraGas_Source_Aura_Public_Character_AuraCharacter_h_20_CALLBACK_WRAPPERS \
	FID_Udemy_AuraGas_Source_Aura_Public_Character_AuraCharacter_h_20_INCLASS_NO_PURE_DECLS \
	FID_Udemy_AuraGas_Source_Aura_Public_Character_AuraCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class AAuraCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Udemy_AuraGas_Source_Aura_Public_Character_AuraCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
