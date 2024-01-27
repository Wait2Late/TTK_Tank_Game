// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TTKGameplayWorkTest/Core/TTKGameplayWorkTestGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTTKGameplayWorkTestGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TTKGAMEPLAYWORKTEST_API UClass* Z_Construct_UClass_ATTKGameplayWorkTestGameMode();
	TTKGAMEPLAYWORKTEST_API UClass* Z_Construct_UClass_ATTKGameplayWorkTestGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TTKGameplayWorkTest();
// End Cross Module References
	void ATTKGameplayWorkTestGameMode::StaticRegisterNativesATTKGameplayWorkTestGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATTKGameplayWorkTestGameMode);
	UClass* Z_Construct_UClass_ATTKGameplayWorkTestGameMode_NoRegister()
	{
		return ATTKGameplayWorkTestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATTKGameplayWorkTestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATTKGameplayWorkTestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TTKGameplayWorkTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATTKGameplayWorkTestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Core/TTKGameplayWorkTestGameMode.h" },
		{ "ModuleRelativePath", "Core/TTKGameplayWorkTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATTKGameplayWorkTestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATTKGameplayWorkTestGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATTKGameplayWorkTestGameMode_Statics::ClassParams = {
		&ATTKGameplayWorkTestGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATTKGameplayWorkTestGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATTKGameplayWorkTestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATTKGameplayWorkTestGameMode()
	{
		if (!Z_Registration_Info_UClass_ATTKGameplayWorkTestGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATTKGameplayWorkTestGameMode.OuterSingleton, Z_Construct_UClass_ATTKGameplayWorkTestGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATTKGameplayWorkTestGameMode.OuterSingleton;
	}
	template<> TTKGAMEPLAYWORKTEST_API UClass* StaticClass<ATTKGameplayWorkTestGameMode>()
	{
		return ATTKGameplayWorkTestGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATTKGameplayWorkTestGameMode);
	ATTKGameplayWorkTestGameMode::~ATTKGameplayWorkTestGameMode() {}
	struct Z_CompiledInDeferFile_FID_TTKGameplayWorkTest_Source_TTKGameplayWorkTest_Core_TTKGameplayWorkTestGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TTKGameplayWorkTest_Source_TTKGameplayWorkTest_Core_TTKGameplayWorkTestGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATTKGameplayWorkTestGameMode, ATTKGameplayWorkTestGameMode::StaticClass, TEXT("ATTKGameplayWorkTestGameMode"), &Z_Registration_Info_UClass_ATTKGameplayWorkTestGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATTKGameplayWorkTestGameMode), 363007195U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TTKGameplayWorkTest_Source_TTKGameplayWorkTest_Core_TTKGameplayWorkTestGameMode_h_1984369722(TEXT("/Script/TTKGameplayWorkTest"),
		Z_CompiledInDeferFile_FID_TTKGameplayWorkTest_Source_TTKGameplayWorkTest_Core_TTKGameplayWorkTestGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TTKGameplayWorkTest_Source_TTKGameplayWorkTest_Core_TTKGameplayWorkTestGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
