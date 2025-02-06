// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/EnemyInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef AURA_EnemyInterface_generated_h
#error "EnemyInterface.generated.h already included, missing '#pragma once' in EnemyInterface.h"
#endif
#define AURA_EnemyInterface_generated_h

#define FID_Udemy_AuraGas_Source_Aura_Public_Interaction_EnemyInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual AActor* GetCombatTarget_Implementation() const { return NULL; }; \
	virtual void SetCombatTarget_Implementation(AActor* InCombatTarget) {}; \
	DECLARE_FUNCTION(execGetCombatTarget); \
	DECLARE_FUNCTION(execSetCombatTarget);


#define FID_Udemy_AuraGas_Source_Aura_Public_Interaction_EnemyInterface_h_13_CALLBACK_WRAPPERS
#define FID_Udemy_AuraGas_Source_Aura_Public_Interaction_EnemyInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AURA_API UEnemyInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnemyInterface(UEnemyInterface&&); \
	UEnemyInterface(const UEnemyInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AURA_API, UEnemyInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemyInterface) \
	AURA_API virtual ~UEnemyInterface();


#define FID_Udemy_AuraGas_Source_Aura_Public_Interaction_EnemyInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEnemyInterface(); \
	friend struct Z_Construct_UClass_UEnemyInterface_Statics; \
public: \
	DECLARE_CLASS(UEnemyInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Aura"), AURA_API) \
	DECLARE_SERIALIZER(UEnemyInterface)


#define FID_Udemy_AuraGas_Source_Aura_Public_Interaction_EnemyInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Udemy_AuraGas_Source_Aura_Public_Interaction_EnemyInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Udemy_AuraGas_Source_Aura_Public_Interaction_EnemyInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Udemy_AuraGas_Source_Aura_Public_Interaction_EnemyInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEnemyInterface() {} \
public: \
	typedef UEnemyInterface UClassType; \
	typedef IEnemyInterface ThisClass; \
	static AActor* Execute_GetCombatTarget(const UObject* O); \
	static void Execute_SetCombatTarget(UObject* O, AActor* InCombatTarget); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Udemy_AuraGas_Source_Aura_Public_Interaction_EnemyInterface_h_10_PROLOG
#define FID_Udemy_AuraGas_Source_Aura_Public_Interaction_EnemyInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Udemy_AuraGas_Source_Aura_Public_Interaction_EnemyInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Udemy_AuraGas_Source_Aura_Public_Interaction_EnemyInterface_h_13_CALLBACK_WRAPPERS \
	FID_Udemy_AuraGas_Source_Aura_Public_Interaction_EnemyInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class UEnemyInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Udemy_AuraGas_Source_Aura_Public_Interaction_EnemyInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
