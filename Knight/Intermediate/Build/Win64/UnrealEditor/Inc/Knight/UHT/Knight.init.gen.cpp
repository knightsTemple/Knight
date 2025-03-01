// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKnight_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Knight;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Knight()
	{
		if (!Z_Registration_Info_UPackage__Script_Knight.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Knight",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xB2E3E7DB,
				0xCAF7624C,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Knight.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Knight.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Knight(Z_Construct_UPackage__Script_Knight, TEXT("/Script/Knight"), Z_Registration_Info_UPackage__Script_Knight, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB2E3E7DB, 0xCAF7624C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
