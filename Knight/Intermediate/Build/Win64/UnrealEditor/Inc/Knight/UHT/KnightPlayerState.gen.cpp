// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Knight/Public/Character/KnightPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKnightPlayerState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
KNIGHT_API UClass* Z_Construct_UClass_AKnightPlayerState();
KNIGHT_API UClass* Z_Construct_UClass_AKnightPlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_Knight();
// End Cross Module References

// Begin Class AKnightPlayerState
void AKnightPlayerState::StaticRegisterNativesAKnightPlayerState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKnightPlayerState);
UClass* Z_Construct_UClass_AKnightPlayerState_NoRegister()
{
	return AKnightPlayerState::StaticClass();
}
struct Z_Construct_UClass_AKnightPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Character/KnightPlayerState.h" },
		{ "ModuleRelativePath", "Public/Character/KnightPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKnightPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AKnightPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_Knight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKnightPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKnightPlayerState_Statics::ClassParams = {
	&AKnightPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKnightPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AKnightPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKnightPlayerState()
{
	if (!Z_Registration_Info_UClass_AKnightPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKnightPlayerState.OuterSingleton, Z_Construct_UClass_AKnightPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKnightPlayerState.OuterSingleton;
}
template<> KNIGHT_API UClass* StaticClass<AKnightPlayerState>()
{
	return AKnightPlayerState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AKnightPlayerState);
AKnightPlayerState::~AKnightPlayerState() {}
// End Class AKnightPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Knight_Source_Knight_Public_Character_KnightPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKnightPlayerState, AKnightPlayerState::StaticClass, TEXT("AKnightPlayerState"), &Z_Registration_Info_UClass_AKnightPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKnightPlayerState), 1557968265U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Knight_Source_Knight_Public_Character_KnightPlayerState_h_191197652(TEXT("/Script/Knight"),
	Z_CompiledInDeferFile_FID_Knight_Source_Knight_Public_Character_KnightPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Knight_Source_Knight_Public_Character_KnightPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
