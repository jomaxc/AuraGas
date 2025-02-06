// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Character/AuraEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraEnemy() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AURA_API UClass* Z_Construct_UClass_AAuraAIController_NoRegister();
AURA_API UClass* Z_Construct_UClass_AAuraCharacterBase();
AURA_API UClass* Z_Construct_UClass_AAuraEnemy();
AURA_API UClass* Z_Construct_UClass_AAuraEnemy_NoRegister();
AURA_API UClass* Z_Construct_UClass_UEnemyInterface_NoRegister();
AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignature__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class AAuraEnemy
void AAuraEnemy::StaticRegisterNativesAAuraEnemy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraEnemy);
UClass* Z_Construct_UClass_AAuraEnemy_NoRegister()
{
	return AAuraEnemy::StaticClass();
}
struct Z_Construct_UClass_AAuraEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/AuraEnemy.h" },
		{ "ModuleRelativePath", "Public/Character/AuraEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatTarget_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** end Combat Interface */" },
#endif
		{ "ModuleRelativePath", "Public/Character/AuraEnemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "end Combat Interface" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/AuraEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxHealthChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/AuraEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHitReacting_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Character/AuraEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LifeSpan_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Character/AuraEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "Character Class Defaults" },
		{ "ModuleRelativePath", "Public/Character/AuraEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[] = {
		{ "Category", "AuraEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/AuraEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/Character/AuraEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuraAIController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/AuraEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatTarget;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxHealthChanged;
	static void NewProp_bHitReacting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitReacting;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeSpan;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AuraAIController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAuraEnemy_Statics::NewProp_CombatTarget = { "CombatTarget", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraEnemy, CombatTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatTarget_MetaData), NewProp_CombatTarget_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAuraEnemy_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraEnemy, OnHealthChanged), Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChanged_MetaData), NewProp_OnHealthChanged_MetaData) }; // 1564251299
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAuraEnemy_Statics::NewProp_OnMaxHealthChanged = { "OnMaxHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraEnemy, OnMaxHealthChanged), Z_Construct_UDelegateFunction_Aura_OnAttributeChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMaxHealthChanged_MetaData), NewProp_OnMaxHealthChanged_MetaData) }; // 1564251299
void Z_Construct_UClass_AAuraEnemy_Statics::NewProp_bHitReacting_SetBit(void* Obj)
{
	((AAuraEnemy*)Obj)->bHitReacting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAuraEnemy_Statics::NewProp_bHitReacting = { "bHitReacting", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAuraEnemy), &Z_Construct_UClass_AAuraEnemy_Statics::NewProp_bHitReacting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHitReacting_MetaData), NewProp_bHitReacting_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAuraEnemy_Statics::NewProp_LifeSpan = { "LifeSpan", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraEnemy, LifeSpan), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LifeSpan_MetaData), NewProp_LifeSpan_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAuraEnemy_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraEnemy, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAuraEnemy_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraEnemy, HealthBar), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBar_MetaData), NewProp_HealthBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAuraEnemy_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraEnemy, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTree_MetaData), NewProp_BehaviorTree_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAuraEnemy_Statics::NewProp_AuraAIController = { "AuraAIController", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraEnemy, AuraAIController), Z_Construct_UClass_AAuraAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuraAIController_MetaData), NewProp_AuraAIController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAuraEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEnemy_Statics::NewProp_CombatTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEnemy_Statics::NewProp_OnHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEnemy_Statics::NewProp_OnMaxHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEnemy_Statics::NewProp_bHitReacting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEnemy_Statics::NewProp_LifeSpan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEnemy_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEnemy_Statics::NewProp_HealthBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEnemy_Statics::NewProp_BehaviorTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEnemy_Statics::NewProp_AuraAIController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEnemy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAuraEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAuraCharacterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAuraEnemy_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UEnemyInterface_NoRegister, (int32)VTABLE_OFFSET(AAuraEnemy, IEnemyInterface), false },  // 1089816308
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraEnemy_Statics::ClassParams = {
	&AAuraEnemy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAuraEnemy_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEnemy_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAuraEnemy()
{
	if (!Z_Registration_Info_UClass_AAuraEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraEnemy.OuterSingleton, Z_Construct_UClass_AAuraEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAuraEnemy.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<AAuraEnemy>()
{
	return AAuraEnemy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraEnemy);
AAuraEnemy::~AAuraEnemy() {}
// End Class AAuraEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Udemy_AuraGas_Source_Aura_Public_Character_AuraEnemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAuraEnemy, AAuraEnemy::StaticClass, TEXT("AAuraEnemy"), &Z_Registration_Info_UClass_AAuraEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraEnemy), 4284185093U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Udemy_AuraGas_Source_Aura_Public_Character_AuraEnemy_h_4020246419(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Udemy_AuraGas_Source_Aura_Public_Character_AuraEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Udemy_AuraGas_Source_Aura_Public_Character_AuraEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
