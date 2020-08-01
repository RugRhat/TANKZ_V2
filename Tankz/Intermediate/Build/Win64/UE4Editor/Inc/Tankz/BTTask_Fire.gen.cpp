// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tankz/BTTask_Fire.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_Fire() {}
// Cross Module References
	TANKZ_API UClass* Z_Construct_UClass_UBTTask_Fire_NoRegister();
	TANKZ_API UClass* Z_Construct_UClass_UBTTask_Fire();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Tankz();
// End Cross Module References
	void UBTTask_Fire::StaticRegisterNativesUBTTask_Fire()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_Fire_NoRegister()
	{
		return UBTTask_Fire::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_Fire_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_Fire_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Tankz,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_Fire_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTTask_Fire.h" },
		{ "ModuleRelativePath", "BTTask_Fire.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_Fire_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_Fire>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_Fire_Statics::ClassParams = {
		&UBTTask_Fire::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_Fire_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Fire_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_Fire()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_Fire_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_Fire, 660989364);
	template<> TANKZ_API UClass* StaticClass<UBTTask_Fire>()
	{
		return UBTTask_Fire::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_Fire(Z_Construct_UClass_UBTTask_Fire, &UBTTask_Fire::StaticClass, TEXT("/Script/Tankz"), TEXT("UBTTask_Fire"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_Fire);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
