// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/AuraEnemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AURA_AuraEnemy_generated_h
#error "AuraEnemy.generated.h already included, missing '#pragma once' in AuraEnemy.h"
#endif
#define AURA_AuraEnemy_generated_h

#define FID_Udemy_AuraGas_Source_Aura_Public_Character_AuraEnemy_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAuraEnemy(); \
	friend struct Z_Construct_UClass_AAuraEnemy_Statics; \
public: \
	DECLARE_CLASS(AAuraEnemy, AAuraCharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(AAuraEnemy) \
	virtual UObject* _getUObject() const override { return const_cast<AAuraEnemy*>(this); }


#define FID_Udemy_AuraGas_Source_Aura_Public_Character_AuraEnemy_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAuraEnemy(AAuraEnemy&&); \
	AAuraEnemy(const AAuraEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAuraEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAuraEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAuraEnemy) \
	NO_API virtual ~AAuraEnemy();


#define FID_Udemy_AuraGas_Source_Aura_Public_Character_AuraEnemy_h_17_PROLOG
#define FID_Udemy_AuraGas_Source_Aura_Public_Character_AuraEnemy_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Udemy_AuraGas_Source_Aura_Public_Character_AuraEnemy_h_20_INCLASS_NO_PURE_DECLS \
	FID_Udemy_AuraGas_Source_Aura_Public_Character_AuraEnemy_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class AAuraEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Udemy_AuraGas_Source_Aura_Public_Character_AuraEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
