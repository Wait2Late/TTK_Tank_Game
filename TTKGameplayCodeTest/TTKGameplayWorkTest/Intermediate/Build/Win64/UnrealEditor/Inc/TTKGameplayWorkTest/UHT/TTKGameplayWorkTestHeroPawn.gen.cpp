// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TTKGameplayWorkTest/Gameplay/TTKGameplayWorkTestHeroPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTTKGameplayWorkTestHeroPawn() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	TTKGAMEPLAYWORKTEST_API UClass* Z_Construct_UClass_ATTKGameplayWorkTestBullet_NoRegister();
	TTKGAMEPLAYWORKTEST_API UClass* Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn();
	TTKGAMEPLAYWORKTEST_API UClass* Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TTKGameplayWorkTest();
// End Cross Module References
	void ATTKGameplayWorkTestHeroPawn::StaticRegisterNativesATTKGameplayWorkTestHeroPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATTKGameplayWorkTestHeroPawn);
	UClass* Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_NoRegister()
	{
		return ATTKGameplayWorkTestHeroPawn::StaticClass();
	}
	struct Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BulletType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TTKGameplayWorkTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Gameplay/TTKGameplayWorkTestHeroPawn.h" },
		{ "ModuleRelativePath", "Gameplay/TTKGameplayWorkTestHeroPawn.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gameplay/TTKGameplayWorkTestHeroPawn.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATTKGameplayWorkTestHeroPawn, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gameplay/TTKGameplayWorkTestHeroPawn.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATTKGameplayWorkTestHeroPawn, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** MappingContext */" },
		{ "ModuleRelativePath", "Gameplay/TTKGameplayWorkTestHeroPawn.h" },
		{ "ToolTip", "MappingContext" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATTKGameplayWorkTestHeroPawn, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_DefaultMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_DefaultMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_ShootAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Shoot Input Action */" },
		{ "ModuleRelativePath", "Gameplay/TTKGameplayWorkTestHeroPawn.h" },
		{ "ToolTip", "Shoot Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_ShootAction = { "ShootAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATTKGameplayWorkTestHeroPawn, ShootAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_ShootAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_ShootAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Move Input Action */" },
		{ "ModuleRelativePath", "Gameplay/TTKGameplayWorkTestHeroPawn.h" },
		{ "ToolTip", "Move Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATTKGameplayWorkTestHeroPawn, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_MoveAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Look Input Action */" },
		{ "ModuleRelativePath", "Gameplay/TTKGameplayWorkTestHeroPawn.h" },
		{ "ToolTip", "Look Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATTKGameplayWorkTestHeroPawn, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_LookAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_LookAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_BulletType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Bullet" },
		{ "ModuleRelativePath", "Gameplay/TTKGameplayWorkTestHeroPawn.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_BulletType = { "BulletType", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATTKGameplayWorkTestHeroPawn, BulletType), Z_Construct_UClass_UClass, Z_Construct_UClass_ATTKGameplayWorkTestBullet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_BulletType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_BulletType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_ShootAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::NewProp_BulletType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATTKGameplayWorkTestHeroPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::ClassParams = {
		&ATTKGameplayWorkTestHeroPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn()
	{
		if (!Z_Registration_Info_UClass_ATTKGameplayWorkTestHeroPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATTKGameplayWorkTestHeroPawn.OuterSingleton, Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATTKGameplayWorkTestHeroPawn.OuterSingleton;
	}
	template<> TTKGAMEPLAYWORKTEST_API UClass* StaticClass<ATTKGameplayWorkTestHeroPawn>()
	{
		return ATTKGameplayWorkTestHeroPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATTKGameplayWorkTestHeroPawn);
	ATTKGameplayWorkTestHeroPawn::~ATTKGameplayWorkTestHeroPawn() {}
	struct Z_CompiledInDeferFile_FID_TTKGameplayWorkTest_Source_TTKGameplayWorkTest_Gameplay_TTKGameplayWorkTestHeroPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TTKGameplayWorkTest_Source_TTKGameplayWorkTest_Gameplay_TTKGameplayWorkTestHeroPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATTKGameplayWorkTestHeroPawn, ATTKGameplayWorkTestHeroPawn::StaticClass, TEXT("ATTKGameplayWorkTestHeroPawn"), &Z_Registration_Info_UClass_ATTKGameplayWorkTestHeroPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATTKGameplayWorkTestHeroPawn), 3163444269U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TTKGameplayWorkTest_Source_TTKGameplayWorkTest_Gameplay_TTKGameplayWorkTestHeroPawn_h_1516786652(TEXT("/Script/TTKGameplayWorkTest"),
		Z_CompiledInDeferFile_FID_TTKGameplayWorkTest_Source_TTKGameplayWorkTest_Gameplay_TTKGameplayWorkTestHeroPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TTKGameplayWorkTest_Source_TTKGameplayWorkTest_Gameplay_TTKGameplayWorkTestHeroPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
