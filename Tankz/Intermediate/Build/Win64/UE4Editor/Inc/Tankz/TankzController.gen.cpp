// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tankz/TankzController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankzController() {}
// Cross Module References
	TANKZ_API UClass* Z_Construct_UClass_ATankzController_NoRegister();
	TANKZ_API UClass* Z_Construct_UClass_ATankzController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Tankz();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void ATankzController::StaticRegisterNativesATankzController()
	{
	}
	UClass* Z_Construct_UClass_ATankzController_NoRegister()
	{
		return ATankzController::StaticClass();
	}
	struct Z_Construct_UClass_ATankzController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HUDClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankzController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Tankz,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankzController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TankzController.h" },
		{ "ModuleRelativePath", "TankzController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankzController_Statics::NewProp_HUDClass_MetaData[] = {
		{ "Category", "TankzController" },
		{ "ModuleRelativePath", "TankzController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATankzController_Statics::NewProp_HUDClass = { "HUDClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankzController, HUDClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATankzController_Statics::NewProp_HUDClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankzController_Statics::NewProp_HUDClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATankzController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankzController_Statics::NewProp_HUDClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankzController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankzController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATankzController_Statics::ClassParams = {
		&ATankzController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATankzController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATankzController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATankzController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATankzController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankzController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATankzController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATankzController, 2475446530);
	template<> TANKZ_API UClass* StaticClass<ATankzController>()
	{
		return ATankzController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATankzController(Z_Construct_UClass_ATankzController, &ATankzController::StaticClass, TEXT("/Script/Tankz"), TEXT("ATankzController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankzController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
