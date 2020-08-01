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
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankzController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankzController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATankzController_Statics::ClassParams = {
		&ATankzController::StaticClass,
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
	IMPLEMENT_CLASS(ATankzController, 2825988437);
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
