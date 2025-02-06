// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Player/AuraPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraPlayerState() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_AAuraPlayerState();
AURA_API UClass* Z_Construct_UClass_AAuraPlayerState_NoRegister();
AURA_API UClass* Z_Construct_UClass_ULevelUpInfo_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class AAuraPlayerState Function OnRep_AttributePoints
struct Z_Construct_UFunction_AAuraPlayerState_OnRep_AttributePoints_Statics
{
	struct AuraPlayerState_eventOnRep_AttributePoints_Parms
	{
		int32 OldAttributePoints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/AuraPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldAttributePoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAuraPlayerState_OnRep_AttributePoints_Statics::NewProp_OldAttributePoints = { "OldAttributePoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraPlayerState_eventOnRep_AttributePoints_Parms, OldAttributePoints), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraPlayerState_OnRep_AttributePoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraPlayerState_OnRep_AttributePoints_Statics::NewProp_OldAttributePoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_AttributePoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraPlayerState_OnRep_AttributePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraPlayerState, nullptr, "OnRep_AttributePoints", nullptr, nullptr, Z_Construct_UFunction_AAuraPlayerState_OnRep_AttributePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_AttributePoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAuraPlayerState_OnRep_AttributePoints_Statics::AuraPlayerState_eventOnRep_AttributePoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_AttributePoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraPlayerState_OnRep_AttributePoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAuraPlayerState_OnRep_AttributePoints_Statics::AuraPlayerState_eventOnRep_AttributePoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAuraPlayerState_OnRep_AttributePoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraPlayerState_OnRep_AttributePoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAuraPlayerState::execOnRep_AttributePoints)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_OldAttributePoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_AttributePoints(Z_Param_OldAttributePoints);
	P_NATIVE_END;
}
// End Class AAuraPlayerState Function OnRep_AttributePoints

// Begin Class AAuraPlayerState Function OnRep_Level
struct Z_Construct_UFunction_AAuraPlayerState_OnRep_Level_Statics
{
	struct AuraPlayerState_eventOnRep_Level_Parms
	{
		int32 OldLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/AuraPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAuraPlayerState_OnRep_Level_Statics::NewProp_OldLevel = { "OldLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraPlayerState_eventOnRep_Level_Parms, OldLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraPlayerState_OnRep_Level_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraPlayerState_OnRep_Level_Statics::NewProp_OldLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_Level_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraPlayerState_OnRep_Level_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraPlayerState, nullptr, "OnRep_Level", nullptr, nullptr, Z_Construct_UFunction_AAuraPlayerState_OnRep_Level_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_Level_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAuraPlayerState_OnRep_Level_Statics::AuraPlayerState_eventOnRep_Level_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_Level_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraPlayerState_OnRep_Level_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAuraPlayerState_OnRep_Level_Statics::AuraPlayerState_eventOnRep_Level_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAuraPlayerState_OnRep_Level()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraPlayerState_OnRep_Level_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAuraPlayerState::execOnRep_Level)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_OldLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Level(Z_Param_OldLevel);
	P_NATIVE_END;
}
// End Class AAuraPlayerState Function OnRep_Level

// Begin Class AAuraPlayerState Function OnRep_SpellPoints
struct Z_Construct_UFunction_AAuraPlayerState_OnRep_SpellPoints_Statics
{
	struct AuraPlayerState_eventOnRep_SpellPoints_Parms
	{
		int32 OldSpellPoints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/AuraPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldSpellPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAuraPlayerState_OnRep_SpellPoints_Statics::NewProp_OldSpellPoints = { "OldSpellPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraPlayerState_eventOnRep_SpellPoints_Parms, OldSpellPoints), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraPlayerState_OnRep_SpellPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraPlayerState_OnRep_SpellPoints_Statics::NewProp_OldSpellPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_SpellPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraPlayerState_OnRep_SpellPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraPlayerState, nullptr, "OnRep_SpellPoints", nullptr, nullptr, Z_Construct_UFunction_AAuraPlayerState_OnRep_SpellPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_SpellPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAuraPlayerState_OnRep_SpellPoints_Statics::AuraPlayerState_eventOnRep_SpellPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_SpellPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraPlayerState_OnRep_SpellPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAuraPlayerState_OnRep_SpellPoints_Statics::AuraPlayerState_eventOnRep_SpellPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAuraPlayerState_OnRep_SpellPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraPlayerState_OnRep_SpellPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAuraPlayerState::execOnRep_SpellPoints)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_OldSpellPoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_SpellPoints(Z_Param_OldSpellPoints);
	P_NATIVE_END;
}
// End Class AAuraPlayerState Function OnRep_SpellPoints

// Begin Class AAuraPlayerState Function OnRep_XP
struct Z_Construct_UFunction_AAuraPlayerState_OnRep_XP_Statics
{
	struct AuraPlayerState_eventOnRep_XP_Parms
	{
		int32 OldXP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/AuraPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldXP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAuraPlayerState_OnRep_XP_Statics::NewProp_OldXP = { "OldXP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraPlayerState_eventOnRep_XP_Parms, OldXP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraPlayerState_OnRep_XP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraPlayerState_OnRep_XP_Statics::NewProp_OldXP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_XP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraPlayerState_OnRep_XP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraPlayerState, nullptr, "OnRep_XP", nullptr, nullptr, Z_Construct_UFunction_AAuraPlayerState_OnRep_XP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_XP_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAuraPlayerState_OnRep_XP_Statics::AuraPlayerState_eventOnRep_XP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_XP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraPlayerState_OnRep_XP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAuraPlayerState_OnRep_XP_Statics::AuraPlayerState_eventOnRep_XP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAuraPlayerState_OnRep_XP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraPlayerState_OnRep_XP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAuraPlayerState::execOnRep_XP)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_OldXP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_XP(Z_Param_OldXP);
	P_NATIVE_END;
}
// End Class AAuraPlayerState Function OnRep_XP

// Begin Class AAuraPlayerState
void AAuraPlayerState::StaticRegisterNativesAAuraPlayerState()
{
	UClass* Class = AAuraPlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_AttributePoints", &AAuraPlayerState::execOnRep_AttributePoints },
		{ "OnRep_Level", &AAuraPlayerState::execOnRep_Level },
		{ "OnRep_SpellPoints", &AAuraPlayerState::execOnRep_SpellPoints },
		{ "OnRep_XP", &AAuraPlayerState::execOnRep_XP },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraPlayerState);
UClass* Z_Construct_UClass_AAuraPlayerState_NoRegister()
{
	return AAuraPlayerState::StaticClass();
}
struct Z_Construct_UClass_AAuraPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/AuraPlayerState.h" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelUpInfo_MetaData[] = {
		{ "Category", "AuraPlayerState" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "AuraPlayerState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "AuraPlayerState" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XP_MetaData[] = {
		{ "Category", "AuraPlayerState" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributePoints_MetaData[] = {
		{ "Category", "AuraPlayerState" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpellPoints_MetaData[] = {
		{ "Category", "AuraPlayerState" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelUpInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FIntPropertyParams NewProp_XP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributePoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpellPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAuraPlayerState_OnRep_AttributePoints, "OnRep_AttributePoints" }, // 3378946391
		{ &Z_Construct_UFunction_AAuraPlayerState_OnRep_Level, "OnRep_Level" }, // 2016085684
		{ &Z_Construct_UFunction_AAuraPlayerState_OnRep_SpellPoints, "OnRep_SpellPoints" }, // 2912440646
		{ &Z_Construct_UFunction_AAuraPlayerState_OnRep_XP, "OnRep_XP" }, // 800662747
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_LevelUpInfo = { "LevelUpInfo", nullptr, (EPropertyFlags)0x0114000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerState, LevelUpInfo), Z_Construct_UClass_ULevelUpInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelUpInfo_MetaData), NewProp_LevelUpInfo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerState, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerState, AttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSet_MetaData), NewProp_AttributeSet_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_Level = { "Level", "OnRep_Level", (EPropertyFlags)0x0040000100020021, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerState, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_XP = { "XP", "OnRep_XP", (EPropertyFlags)0x0040000100020021, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerState, XP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XP_MetaData), NewProp_XP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_AttributePoints = { "AttributePoints", "OnRep_AttributePoints", (EPropertyFlags)0x0040000100020021, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerState, AttributePoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributePoints_MetaData), NewProp_AttributePoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_SpellPoints = { "SpellPoints", "OnRep_SpellPoints", (EPropertyFlags)0x0040000100020021, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerState, SpellPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpellPoints_MetaData), NewProp_SpellPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAuraPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_LevelUpInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_AttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_XP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_AttributePoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_SpellPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAuraPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAuraPlayerState_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AAuraPlayerState, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraPlayerState_Statics::ClassParams = {
	&AAuraPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAuraPlayerState_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerState_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAuraPlayerState()
{
	if (!Z_Registration_Info_UClass_AAuraPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraPlayerState.OuterSingleton, Z_Construct_UClass_AAuraPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAuraPlayerState.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<AAuraPlayerState>()
{
	return AAuraPlayerState::StaticClass();
}
void AAuraPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Level(TEXT("Level"));
	static const FName Name_XP(TEXT("XP"));
	static const FName Name_AttributePoints(TEXT("AttributePoints"));
	static const FName Name_SpellPoints(TEXT("SpellPoints"));
	const bool bIsValid = true
		&& Name_Level == ClassReps[(int32)ENetFields_Private::Level].Property->GetFName()
		&& Name_XP == ClassReps[(int32)ENetFields_Private::XP].Property->GetFName()
		&& Name_AttributePoints == ClassReps[(int32)ENetFields_Private::AttributePoints].Property->GetFName()
		&& Name_SpellPoints == ClassReps[(int32)ENetFields_Private::SpellPoints].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AAuraPlayerState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraPlayerState);
AAuraPlayerState::~AAuraPlayerState() {}
// End Class AAuraPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Udemy_AuraGas_Source_Aura_Public_Player_AuraPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAuraPlayerState, AAuraPlayerState::StaticClass, TEXT("AAuraPlayerState"), &Z_Registration_Info_UClass_AAuraPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraPlayerState), 2380156113U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Udemy_AuraGas_Source_Aura_Public_Player_AuraPlayerState_h_850206997(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Udemy_AuraGas_Source_Aura_Public_Player_AuraPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Udemy_AuraGas_Source_Aura_Public_Player_AuraPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
