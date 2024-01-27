// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TTKGameplayWorkTest/Gameplay/TTKGameplayWorkTestBullet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTTKGameplayWorkTestBullet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	TTKGAMEPLAYWORKTEST_API UClass* Z_Construct_UClass_ATTKGameplayWorkTestBullet();
	TTKGAMEPLAYWORKTEST_API UClass* Z_Construct_UClass_ATTKGameplayWorkTestBullet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TTKGameplayWorkTest();
// End Cross Module References
	void ATTKGameplayWorkTestBullet::StaticRegisterNativesATTKGameplayWorkTestBullet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATTKGameplayWorkTestBullet);
	UClass* Z_Construct_UClass_ATTKGameplayWorkTestBullet_NoRegister()
	{
		return ATTKGameplayWorkTestBullet::StaticClass();
	}
	struct Z_Construct_UClass_ATTKGameplayWorkTestBullet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATTKGameplayWorkTestBullet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TTKGameplayWorkTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATTKGameplayWorkTestBullet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Gameplay/TTKGameplayWorkTestBullet.h" },
		{ "ModuleRelativePath", "Gameplay/TTKGameplayWorkTestBullet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATTKGameplayWorkTestBullet_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gameplay/TTKGameplayWorkTestBullet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATTKGameplayWorkTestBullet_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATTKGameplayWorkTestBullet, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATTKGameplayWorkTestBullet_Statics::NewProp_CollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATTKGameplayWorkTestBullet_Statics::NewProp_CollisionComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATTKGameplayWorkTestBullet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATTKGameplayWorkTestBullet_Statics::NewProp_CollisionComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATTKGameplayWorkTestBullet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATTKGameplayWorkTestBullet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATTKGameplayWorkTestBullet_Statics::ClassParams = {
		&ATTKGameplayWorkTestBullet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATTKGameplayWorkTestBullet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATTKGameplayWorkTestBullet_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATTKGameplayWorkTestBullet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATTKGameplayWorkTestBullet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATTKGameplayWorkTestBullet()
	{
		if (!Z_Registration_Info_UClass_ATTKGameplayWorkTestBullet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATTKGameplayWorkTestBullet.OuterSingleton, Z_Construct_UClass_ATTKGameplayWorkTestBullet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATTKGameplayWorkTestBullet.OuterSingleton;
	}
	template<> TTKGAMEPLAYWORKTEST_API UClass* StaticClass<ATTKGameplayWorkTestBullet>()
	{
		return ATTKGameplayWorkTestBullet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATTKGameplayWorkTestBullet);
	ATTKGameplayWorkTestBullet::~ATTKGameplayWorkTestBullet() {}
	struct Z_CompiledInDeferFile_FID_TTKGameplayWorkTest_Source_TTKGameplayWorkTest_Gameplay_TTKGameplayWorkTestBullet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TTKGameplayWorkTest_Source_TTKGameplayWorkTest_Gameplay_TTKGameplayWorkTestBullet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATTKGameplayWorkTestBullet, ATTKGameplayWorkTestBullet::StaticClass, TEXT("ATTKGameplayWorkTestBullet"), &Z_Registration_Info_UClass_ATTKGameplayWorkTestBullet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATTKGameplayWorkTestBullet), 3129597835U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TTKGameplayWorkTest_Source_TTKGameplayWorkTest_Gameplay_TTKGameplayWorkTestBullet_h_977041966(TEXT("/Script/TTKGameplayWorkTest"),
		Z_CompiledInDeferFile_FID_TTKGameplayWorkTest_Source_TTKGameplayWorkTest_Gameplay_TTKGameplayWorkTestBullet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TTKGameplayWorkTest_Source_TTKGameplayWorkTest_Gameplay_TTKGameplayWorkTestBullet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
