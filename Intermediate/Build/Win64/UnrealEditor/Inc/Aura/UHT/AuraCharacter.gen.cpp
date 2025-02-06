// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Character/AuraCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraCharacter() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_AAuraCharacter();
AURA_API UClass* Z_Construct_UClass_AAuraCharacter_NoRegister();
AURA_API UClass* Z_Construct_UClass_AAuraCharacterBase();
AURA_API UClass* Z_Construct_UClass_UPlayerInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class AAuraCharacter Function GetInShockLoop
struct Z_Construct_UFunction_AAuraCharacter_GetInShockLoop_Statics
{
	struct AuraCharacter_eventGetInShockLoop_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "My Variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Getter function\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AuraCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter function" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAuraCharacter_GetInShockLoop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AuraCharacter_eventGetInShockLoop_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAuraCharacter_GetInShockLoop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AuraCharacter_eventGetInShockLoop_Parms), &Z_Construct_UFunction_AAuraCharacter_GetInShockLoop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraCharacter_GetInShockLoop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraCharacter_GetInShockLoop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraCharacter_GetInShockLoop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraCharacter_GetInShockLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraCharacter, nullptr, "GetInShockLoop", nullptr, nullptr, Z_Construct_UFunction_AAuraCharacter_GetInShockLoop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraCharacter_GetInShockLoop_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAuraCharacter_GetInShockLoop_Statics::AuraCharacter_eventGetInShockLoop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraCharacter_GetInShockLoop_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraCharacter_GetInShockLoop_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAuraCharacter_GetInShockLoop_Statics::AuraCharacter_eventGetInShockLoop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAuraCharacter_GetInShockLoop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraCharacter_GetInShockLoop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAuraCharacter::execGetInShockLoop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetInShockLoop();
	P_NATIVE_END;
}
// End Class AAuraCharacter Function GetInShockLoop

// Begin Class AAuraCharacter Function MulticastLevelUpParticles
static FName NAME_AAuraCharacter_MulticastLevelUpParticles = FName(TEXT("MulticastLevelUpParticles"));
void AAuraCharacter::MulticastLevelUpParticles() const
{
	const_cast<AAuraCharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AAuraCharacter_MulticastLevelUpParticles),NULL);
}
struct Z_Construct_UFunction_AAuraCharacter_MulticastLevelUpParticles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/AuraCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraCharacter_MulticastLevelUpParticles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraCharacter, nullptr, "MulticastLevelUpParticles", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraCharacter_MulticastLevelUpParticles_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraCharacter_MulticastLevelUpParticles_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAuraCharacter_MulticastLevelUpParticles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraCharacter_MulticastLevelUpParticles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAuraCharacter::execMulticastLevelUpParticles)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastLevelUpParticles_Implementation();
	P_NATIVE_END;
}
// End Class AAuraCharacter Function MulticastLevelUpParticles

// Begin Class AAuraCharacter Function SetInShockLoop
struct Z_Construct_UFunction_AAuraCharacter_SetInShockLoop_Statics
{
	struct AuraCharacter_eventSetInShockLoop_Parms
	{
		bool NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "My Variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Setter function\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AuraCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setter function" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_NewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAuraCharacter_SetInShockLoop_Statics::NewProp_NewValue_SetBit(void* Obj)
{
	((AuraCharacter_eventSetInShockLoop_Parms*)Obj)->NewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAuraCharacter_SetInShockLoop_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AuraCharacter_eventSetInShockLoop_Parms), &Z_Construct_UFunction_AAuraCharacter_SetInShockLoop_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraCharacter_SetInShockLoop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraCharacter_SetInShockLoop_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraCharacter_SetInShockLoop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraCharacter_SetInShockLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraCharacter, nullptr, "SetInShockLoop", nullptr, nullptr, Z_Construct_UFunction_AAuraCharacter_SetInShockLoop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraCharacter_SetInShockLoop_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAuraCharacter_SetInShockLoop_Statics::AuraCharacter_eventSetInShockLoop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraCharacter_SetInShockLoop_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraCharacter_SetInShockLoop_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAuraCharacter_SetInShockLoop_Statics::AuraCharacter_eventSetInShockLoop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAuraCharacter_SetInShockLoop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraCharacter_SetInShockLoop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAuraCharacter::execSetInShockLoop)
{
	P_GET_UBOOL(Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInShockLoop(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class AAuraCharacter Function SetInShockLoop

// Begin Class AAuraCharacter
void AAuraCharacter::StaticRegisterNativesAAuraCharacter()
{
	UClass* Class = AAuraCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInShockLoop", &AAuraCharacter::execGetInShockLoop },
		{ "MulticastLevelUpParticles", &AAuraCharacter::execMulticastLevelUpParticles },
		{ "SetInShockLoop", &AAuraCharacter::execSetInShockLoop },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraCharacter);
UClass* Z_Construct_UClass_AAuraCharacter_NoRegister()
{
	return AAuraCharacter::StaticClass();
}
struct Z_Construct_UClass_AAuraCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/AuraCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/AuraCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelUpNiagaraComponent_MetaData[] = {
		{ "Category", "AuraCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** end Combat Interface */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/AuraCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "end Combat Interface" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInShockLoop_MetaData[] = {
		{ "Category", "My Variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The bool variable itself\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AuraCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The bool variable itself" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[] = {
		{ "Category", "AuraCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/AuraCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "Category", "AuraCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/AuraCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelUpNiagaraComponent;
	static void NewProp_bInShockLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInShockLoop;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAuraCharacter_GetInShockLoop, "GetInShockLoop" }, // 2416426098
		{ &Z_Construct_UFunction_AAuraCharacter_MulticastLevelUpParticles, "MulticastLevelUpParticles" }, // 3930700323
		{ &Z_Construct_UFunction_AAuraCharacter_SetInShockLoop, "SetInShockLoop" }, // 2205194210
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAuraCharacter_Statics::NewProp_LevelUpNiagaraComponent = { "LevelUpNiagaraComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraCharacter, LevelUpNiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelUpNiagaraComponent_MetaData), NewProp_LevelUpNiagaraComponent_MetaData) };
void Z_Construct_UClass_AAuraCharacter_Statics::NewProp_bInShockLoop_SetBit(void* Obj)
{
	((AAuraCharacter*)Obj)->bInShockLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAuraCharacter_Statics::NewProp_bInShockLoop = { "bInShockLoop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAuraCharacter), &Z_Construct_UClass_AAuraCharacter_Statics::NewProp_bInShockLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInShockLoop_MetaData), NewProp_bInShockLoop_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAuraCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopDownCameraComponent_MetaData), NewProp_TopDownCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAuraCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAuraCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacter_Statics::NewProp_LevelUpNiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacter_Statics::NewProp_bInShockLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacter_Statics::NewProp_TopDownCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacter_Statics::NewProp_CameraBoom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAuraCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAuraCharacterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAuraCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPlayerInterface_NoRegister, (int32)VTABLE_OFFSET(AAuraCharacter, IPlayerInterface), false },  // 4292328953
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraCharacter_Statics::ClassParams = {
	&AAuraCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAuraCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAuraCharacter()
{
	if (!Z_Registration_Info_UClass_AAuraCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraCharacter.OuterSingleton, Z_Construct_UClass_AAuraCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAuraCharacter.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<AAuraCharacter>()
{
	return AAuraCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraCharacter);
AAuraCharacter::~AAuraCharacter() {}
// End Class AAuraCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Udemy_AuraGas_Source_Aura_Public_Character_AuraCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAuraCharacter, AAuraCharacter::StaticClass, TEXT("AAuraCharacter"), &Z_Registration_Info_UClass_AAuraCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraCharacter), 478409087U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Udemy_AuraGas_Source_Aura_Public_Character_AuraCharacter_h_2240174023(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Udemy_AuraGas_Source_Aura_Public_Character_AuraCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Udemy_AuraGas_Source_Aura_Public_Character_AuraCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
