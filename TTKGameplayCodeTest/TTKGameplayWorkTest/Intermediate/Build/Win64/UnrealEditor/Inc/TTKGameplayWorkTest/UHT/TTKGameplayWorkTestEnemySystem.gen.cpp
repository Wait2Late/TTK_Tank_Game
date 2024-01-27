// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TTKGameplayWorkTest/Gameplay/TTKGameplayWorkTestEnemySystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTTKGameplayWorkTestEnemySystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	TTKGAMEPLAYWORKTEST_API UClass* Z_Construct_UClass_ATTKGameplayWorkTestBullet_NoRegister();
	TTKGAMEPLAYWORKTEST_API UClass* Z_Construct_UClass_UTTKGameplayWorkTestEnemySystem();
	TTKGAMEPLAYWORKTEST_API UClass* Z_Construct_UClass_UTTKGameplayWorkTestEnemySystem_NoRegister();
	TTKGAMEPLAYWORKTEST_API UClass* Z_Construct_UClass_UTTKGameplayWorkTestEnemySystemComponent();
	TTKGAMEPLAYWORKTEST_API UClass* Z_Construct_UClass_UTTKGameplayWorkTestEnemySystemComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TTKGameplayWorkTest();
// End Cross Module References
	void UTTKGameplayWorkTestEnemySystemComponent::StaticRegisterNativesUTTKGameplayWorkTestEnemySystemComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTTKGameplayWorkTestEnemySystemComponent);
	UClass* Z_Construct_UClass_UTTKGameplayWorkTestEnemySystemComponent_NoRegister()
	{
		return UTTKGameplayWorkTestEnemySystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTTKGameplayWorkTestEnemySystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTTKGameplayWorkTestEnemySystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TTKGameplayWorkTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTTKGameplayWorkTestEnemySystemComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n * Enemy component registered in the enemy system\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Gameplay/TTKGameplayWorkTestEnemySystem.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Gameplay/TTKGameplayWorkTestEnemySystem.h" },
		{ "ToolTip", "Enemy component registered in the enemy system" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTTKGameplayWorkTestEnemySystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTTKGameplayWorkTestEnemySystemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTTKGameplayWorkTestEnemySystemComponent_Statics::ClassParams = {
		&UTTKGameplayWorkTestEnemySystemComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTTKGameplayWorkTestEnemySystemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTTKGameplayWorkTestEnemySystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTTKGameplayWorkTestEnemySystemComponent()
	{
		if (!Z_Registration_Info_UClass_UTTKGameplayWorkTestEnemySystemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTTKGameplayWorkTestEnemySystemComponent.OuterSingleton, Z_Construct_UClass_UTTKGameplayWorkTestEnemySystemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTTKGameplayWorkTestEnemySystemComponent.OuterSingleton;
	}
	template<> TTKGAMEPLAYWORKTEST_API UClass* StaticClass<UTTKGameplayWorkTestEnemySystemComponent>()
	{
		return UTTKGameplayWorkTestEnemySystemComponent::StaticClass();
	}
	UTTKGameplayWorkTestEnemySystemComponent::UTTKGameplayWorkTestEnemySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTTKGameplayWorkTestEnemySystemComponent);
	UTTKGameplayWorkTestEnemySystemComponent::~UTTKGameplayWorkTestEnemySystemComponent() {}
	void UTTKGameplayWorkTestEnemySystem::StaticRegisterNativesUTTKGameplayWorkTestEnemySystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTTKGameplayWorkTestEnemySystem);
	UClass* Z_Construct_UClass_UTTKGameplayWorkTestEnemySystem_NoRegister()
	{
		return UTTKGameplayWorkTestEnemySystem::StaticClass();
	}
	struct Z_Construct_UClass_UTTKGameplayWorkTestEnemySystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enemies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Enemies;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Bullets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bullets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bullets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTTKGameplayWorkTestEnemySystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_TTKGameplayWorkTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTTKGameplayWorkTestEnemySystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Gameplay/TTKGameplayWorkTestEnemySystem.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Gameplay/TTKGameplayWorkTestEnemySystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTTKGameplayWorkTestEnemySystem_Statics::NewProp_Enemies_Inner = { "Enemies", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTTKGameplayWorkTestEnemySystemComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTTKGameplayWorkTestEnemySystem_Statics::NewProp_Enemies_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gameplay/TTKGameplayWorkTestEnemySystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTTKGameplayWorkTestEnemySystem_Statics::NewProp_Enemies = { "Enemies", nullptr, (EPropertyFlags)0x0010008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTTKGameplayWorkTestEnemySystem, Enemies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTTKGameplayWorkTestEnemySystem_Statics::NewProp_Enemies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTTKGameplayWorkTestEnemySystem_Statics::NewProp_Enemies_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTTKGameplayWorkTestEnemySystem_Statics::NewProp_Bullets_Inner = { "Bullets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ATTKGameplayWorkTestBullet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTTKGameplayWorkTestEnemySystem_Statics::NewProp_Bullets_MetaData[] = {
		{ "ModuleRelativePath", "Gameplay/TTKGameplayWorkTestEnemySystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTTKGameplayWorkTestEnemySystem_Statics::NewProp_Bullets = { "Bullets", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTTKGameplayWorkTestEnemySystem, Bullets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTTKGameplayWorkTestEnemySystem_Statics::NewProp_Bullets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTTKGameplayWorkTestEnemySystem_Statics::NewProp_Bullets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTTKGameplayWorkTestEnemySystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTTKGameplayWorkTestEnemySystem_Statics::NewProp_Enemies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTTKGameplayWorkTestEnemySystem_Statics::NewProp_Enemies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTTKGameplayWorkTestEnemySystem_Statics::NewProp_Bullets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTTKGameplayWorkTestEnemySystem_Statics::NewProp_Bullets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTTKGameplayWorkTestEnemySystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTTKGameplayWorkTestEnemySystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTTKGameplayWorkTestEnemySystem_Statics::ClassParams = {
		&UTTKGameplayWorkTestEnemySystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTTKGameplayWorkTestEnemySystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTTKGameplayWorkTestEnemySystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTTKGameplayWorkTestEnemySystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTTKGameplayWorkTestEnemySystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTTKGameplayWorkTestEnemySystem()
	{
		if (!Z_Registration_Info_UClass_UTTKGameplayWorkTestEnemySystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTTKGameplayWorkTestEnemySystem.OuterSingleton, Z_Construct_UClass_UTTKGameplayWorkTestEnemySystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTTKGameplayWorkTestEnemySystem.OuterSingleton;
	}
	template<> TTKGAMEPLAYWORKTEST_API UClass* StaticClass<UTTKGameplayWorkTestEnemySystem>()
	{
		return UTTKGameplayWorkTestEnemySystem::StaticClass();
	}
	UTTKGameplayWorkTestEnemySystem::UTTKGameplayWorkTestEnemySystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTTKGameplayWorkTestEnemySystem);
	UTTKGameplayWorkTestEnemySystem::~UTTKGameplayWorkTestEnemySystem() {}
	struct Z_CompiledInDeferFile_FID_TTKGameplayWorkTest_Source_TTKGameplayWorkTest_Gameplay_TTKGameplayWorkTestEnemySystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TTKGameplayWorkTest_Source_TTKGameplayWorkTest_Gameplay_TTKGameplayWorkTestEnemySystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTTKGameplayWorkTestEnemySystemComponent, UTTKGameplayWorkTestEnemySystemComponent::StaticClass, TEXT("UTTKGameplayWorkTestEnemySystemComponent"), &Z_Registration_Info_UClass_UTTKGameplayWorkTestEnemySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTTKGameplayWorkTestEnemySystemComponent), 2949664844U) },
		{ Z_Construct_UClass_UTTKGameplayWorkTestEnemySystem, UTTKGameplayWorkTestEnemySystem::StaticClass, TEXT("UTTKGameplayWorkTestEnemySystem"), &Z_Registration_Info_UClass_UTTKGameplayWorkTestEnemySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTTKGameplayWorkTestEnemySystem), 1115402782U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TTKGameplayWorkTest_Source_TTKGameplayWorkTest_Gameplay_TTKGameplayWorkTestEnemySystem_h_1784378089(TEXT("/Script/TTKGameplayWorkTest"),
		Z_CompiledInDeferFile_FID_TTKGameplayWorkTest_Source_TTKGameplayWorkTest_Gameplay_TTKGameplayWorkTestEnemySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TTKGameplayWorkTest_Source_TTKGameplayWorkTest_Gameplay_TTKGameplayWorkTestEnemySystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
