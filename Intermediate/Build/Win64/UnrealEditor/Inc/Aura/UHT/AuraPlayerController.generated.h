// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/AuraPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
class UMaterialInterface;
#ifdef AURA_AuraPlayerController_generated_h
#error "AuraPlayerController.generated.h already included, missing '#pragma once' in AuraPlayerController.h"
#endif
#define AURA_AuraPlayerController_generated_h

#define FID_Udemy_AuraGas_Source_Aura_Public_Player_AuraPlayerController_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ShowDamageNumber_Implementation(float DamageAmount, ACharacter* TargetCharacter, bool bBlockedHit, bool bCriticalHit); \
	DECLARE_FUNCTION(execHideMagicCircle); \
	DECLARE_FUNCTION(execShowMagicCircle); \
	DECLARE_FUNCTION(execShowDamageNumber);


#define FID_Udemy_AuraGas_Source_Aura_Public_Player_AuraPlayerController_h_27_CALLBACK_WRAPPERS
#define FID_Udemy_AuraGas_Source_Aura_Public_Player_AuraPlayerController_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAuraPlayerController(); \
	friend struct Z_Construct_UClass_AAuraPlayerController_Statics; \
public: \
	DECLARE_CLASS(AAuraPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(AAuraPlayerController)


#define FID_Udemy_AuraGas_Source_Aura_Public_Player_AuraPlayerController_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAuraPlayerController(AAuraPlayerController&&); \
	AAuraPlayerController(const AAuraPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAuraPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAuraPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAuraPlayerController) \
	NO_API virtual ~AAuraPlayerController();


#define FID_Udemy_AuraGas_Source_Aura_Public_Player_AuraPlayerController_h_24_PROLOG
#define FID_Udemy_AuraGas_Source_Aura_Public_Player_AuraPlayerController_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Udemy_AuraGas_Source_Aura_Public_Player_AuraPlayerController_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Udemy_AuraGas_Source_Aura_Public_Player_AuraPlayerController_h_27_CALLBACK_WRAPPERS \
	FID_Udemy_AuraGas_Source_Aura_Public_Player_AuraPlayerController_h_27_INCLASS_NO_PURE_DECLS \
	FID_Udemy_AuraGas_Source_Aura_Public_Player_AuraPlayerController_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class AAuraPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Udemy_AuraGas_Source_Aura_Public_Player_AuraPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
