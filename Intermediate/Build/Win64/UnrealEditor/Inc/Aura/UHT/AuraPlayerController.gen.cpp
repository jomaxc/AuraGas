// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Player/AuraPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraPlayerController() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_AAuraPlayerController();
AURA_API UClass* Z_Construct_UClass_AAuraPlayerController_NoRegister();
AURA_API UClass* Z_Construct_UClass_AMagicCircle_NoRegister();
AURA_API UClass* Z_Construct_UClass_UAuraAbilitySystemComponent_NoRegister();
AURA_API UClass* Z_Construct_UClass_UAuraInputConfig_NoRegister();
AURA_API UClass* Z_Construct_UClass_UDamageTextComponent_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class AAuraPlayerController Function HideMagicCircle
struct Z_Construct_UFunction_AAuraPlayerController_HideMagicCircle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraPlayerController_HideMagicCircle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraPlayerController, nullptr, "HideMagicCircle", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerController_HideMagicCircle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraPlayerController_HideMagicCircle_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAuraPlayerController_HideMagicCircle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraPlayerController_HideMagicCircle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAuraPlayerController::execHideMagicCircle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideMagicCircle();
	P_NATIVE_END;
}
// End Class AAuraPlayerController Function HideMagicCircle

// Begin Class AAuraPlayerController Function ShowDamageNumber
struct AuraPlayerController_eventShowDamageNumber_Parms
{
	float DamageAmount;
	ACharacter* TargetCharacter;
	bool bBlockedHit;
	bool bCriticalHit;
};
static FName NAME_AAuraPlayerController_ShowDamageNumber = FName(TEXT("ShowDamageNumber"));
void AAuraPlayerController::ShowDamageNumber(float DamageAmount, ACharacter* TargetCharacter, bool bBlockedHit, bool bCriticalHit)
{
	AuraPlayerController_eventShowDamageNumber_Parms Parms;
	Parms.DamageAmount=DamageAmount;
	Parms.TargetCharacter=TargetCharacter;
	Parms.bBlockedHit=bBlockedHit ? true : false;
	Parms.bCriticalHit=bCriticalHit ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_AAuraPlayerController_ShowDamageNumber),&Parms);
}
struct Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetCharacter;
	static void NewProp_bBlockedHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockedHit;
	static void NewProp_bCriticalHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCriticalHit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraPlayerController_eventShowDamageNumber_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::NewProp_TargetCharacter = { "TargetCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraPlayerController_eventShowDamageNumber_Parms, TargetCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::NewProp_bBlockedHit_SetBit(void* Obj)
{
	((AuraPlayerController_eventShowDamageNumber_Parms*)Obj)->bBlockedHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::NewProp_bBlockedHit = { "bBlockedHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AuraPlayerController_eventShowDamageNumber_Parms), &Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::NewProp_bBlockedHit_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::NewProp_bCriticalHit_SetBit(void* Obj)
{
	((AuraPlayerController_eventShowDamageNumber_Parms*)Obj)->bCriticalHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::NewProp_bCriticalHit = { "bCriticalHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AuraPlayerController_eventShowDamageNumber_Parms), &Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::NewProp_bCriticalHit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::NewProp_DamageAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::NewProp_TargetCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::NewProp_bBlockedHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::NewProp_bCriticalHit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraPlayerController, nullptr, "ShowDamageNumber", nullptr, nullptr, Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::PropPointers), sizeof(AuraPlayerController_eventShowDamageNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::Function_MetaDataParams) };
static_assert(sizeof(AuraPlayerController_eventShowDamageNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAuraPlayerController::execShowDamageNumber)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
	P_GET_OBJECT(ACharacter,Z_Param_TargetCharacter);
	P_GET_UBOOL(Z_Param_bBlockedHit);
	P_GET_UBOOL(Z_Param_bCriticalHit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowDamageNumber_Implementation(Z_Param_DamageAmount,Z_Param_TargetCharacter,Z_Param_bBlockedHit,Z_Param_bCriticalHit);
	P_NATIVE_END;
}
// End Class AAuraPlayerController Function ShowDamageNumber

// Begin Class AAuraPlayerController Function ShowMagicCircle
struct Z_Construct_UFunction_AAuraPlayerController_ShowMagicCircle_Statics
{
	struct AuraPlayerController_eventShowMagicCircle_Parms
	{
		UMaterialInterface* DecalMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_DecalMaterial", "None" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DecalMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAuraPlayerController_ShowMagicCircle_Statics::NewProp_DecalMaterial = { "DecalMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraPlayerController_eventShowMagicCircle_Parms, DecalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraPlayerController_ShowMagicCircle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraPlayerController_ShowMagicCircle_Statics::NewProp_DecalMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerController_ShowMagicCircle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraPlayerController_ShowMagicCircle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraPlayerController, nullptr, "ShowMagicCircle", nullptr, nullptr, Z_Construct_UFunction_AAuraPlayerController_ShowMagicCircle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerController_ShowMagicCircle_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAuraPlayerController_ShowMagicCircle_Statics::AuraPlayerController_eventShowMagicCircle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerController_ShowMagicCircle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraPlayerController_ShowMagicCircle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAuraPlayerController_ShowMagicCircle_Statics::AuraPlayerController_eventShowMagicCircle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAuraPlayerController_ShowMagicCircle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraPlayerController_ShowMagicCircle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAuraPlayerController::execShowMagicCircle)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_DecalMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowMagicCircle(Z_Param_DecalMaterial);
	P_NATIVE_END;
}
// End Class AAuraPlayerController Function ShowMagicCircle

// Begin Class AAuraPlayerController
void AAuraPlayerController::StaticRegisterNativesAAuraPlayerController()
{
	UClass* Class = AAuraPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HideMagicCircle", &AAuraPlayerController::execHideMagicCircle },
		{ "ShowDamageNumber", &AAuraPlayerController::execShowDamageNumber },
		{ "ShowMagicCircle", &AAuraPlayerController::execShowMagicCircle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraPlayerController);
UClass* Z_Construct_UClass_AAuraPlayerController_NoRegister()
{
	return AAuraPlayerController::StaticClass();
}
struct Z_Construct_UClass_AAuraPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/AuraPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuraContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShiftAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputConfig_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuraAbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoRunAcceptanceRadius_MetaData[] = {
		{ "Category", "AuraPlayerController" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "Category", "AuraPlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickNiagaraSystem_MetaData[] = {
		{ "Category", "AuraPlayerController" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTextComponentClass_MetaData[] = {
		{ "Category", "AuraPlayerController" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagicCircleClass_MetaData[] = {
		{ "Category", "AuraPlayerController" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagicCircle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/AuraPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AuraContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShiftAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AuraAbilitySystemComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoRunAcceptanceRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickNiagaraSystem;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageTextComponentClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MagicCircleClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MagicCircle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAuraPlayerController_HideMagicCircle, "HideMagicCircle" }, // 3766147588
		{ &Z_Construct_UFunction_AAuraPlayerController_ShowDamageNumber, "ShowDamageNumber" }, // 974100153
		{ &Z_Construct_UFunction_AAuraPlayerController_ShowMagicCircle, "ShowMagicCircle" }, // 2848205097
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraContext = { "AuraContext", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, AuraContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuraContext_MetaData), NewProp_AuraContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_ShiftAction = { "ShiftAction", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, ShiftAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShiftAction_MetaData), NewProp_ShiftAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_InputConfig = { "InputConfig", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, InputConfig), Z_Construct_UClass_UAuraInputConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputConfig_MetaData), NewProp_InputConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraAbilitySystemComponent = { "AuraAbilitySystemComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, AuraAbilitySystemComponent), Z_Construct_UClass_UAuraAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuraAbilitySystemComponent_MetaData), NewProp_AuraAbilitySystemComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AutoRunAcceptanceRadius = { "AutoRunAcceptanceRadius", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, AutoRunAcceptanceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoRunAcceptanceRadius_MetaData), NewProp_AutoRunAcceptanceRadius_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_ClickNiagaraSystem = { "ClickNiagaraSystem", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, ClickNiagaraSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickNiagaraSystem_MetaData), NewProp_ClickNiagaraSystem_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_DamageTextComponentClass = { "DamageTextComponentClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, DamageTextComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageTextComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTextComponentClass_MetaData), NewProp_DamageTextComponentClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_MagicCircleClass = { "MagicCircleClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, MagicCircleClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMagicCircle_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagicCircleClass_MetaData), NewProp_MagicCircleClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_MagicCircle = { "MagicCircle", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerController, MagicCircle), Z_Construct_UClass_AMagicCircle_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagicCircle_MetaData), NewProp_MagicCircle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAuraPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_ShiftAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_InputConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AuraAbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_AutoRunAcceptanceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_ClickNiagaraSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_DamageTextComponentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_MagicCircleClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerController_Statics::NewProp_MagicCircle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAuraPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraPlayerController_Statics::ClassParams = {
	&AAuraPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAuraPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAuraPlayerController()
{
	if (!Z_Registration_Info_UClass_AAuraPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraPlayerController.OuterSingleton, Z_Construct_UClass_AAuraPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAuraPlayerController.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<AAuraPlayerController>()
{
	return AAuraPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraPlayerController);
AAuraPlayerController::~AAuraPlayerController() {}
// End Class AAuraPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Udemy_AuraGas_Source_Aura_Public_Player_AuraPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAuraPlayerController, AAuraPlayerController::StaticClass, TEXT("AAuraPlayerController"), &Z_Registration_Info_UClass_AAuraPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraPlayerController), 64196778U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Udemy_AuraGas_Source_Aura_Public_Player_AuraPlayerController_h_3639322564(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Udemy_AuraGas_Source_Aura_Public_Player_AuraPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Udemy_AuraGas_Source_Aura_Public_Player_AuraPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
