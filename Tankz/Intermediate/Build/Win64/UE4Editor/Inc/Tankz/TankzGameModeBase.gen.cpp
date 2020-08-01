// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tankz/TankzGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankzGameModeBase() {}
// Cross Module References
	TANKZ_API UClass* Z_Construct_UClass_ATankzGameModeBase_NoRegister();
	TANKZ_API UClass* Z_Construct_UClass_ATankzGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Tankz();
	TANKZ_API UClass* Z_Construct_UClass_ATank_NoRegister();
// End Cross Module References
	static FName NAME_ATankzGameModeBase_GameOver = FName(TEXT("GameOver"));
	void ATankzGameModeBase::GameOver(bool PlayerWon)
	{
		TankzGameModeBase_eventGameOver_Parms Parms;
		Parms.PlayerWon=PlayerWon ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ATankzGameModeBase_GameOver),&Parms);
	}
	static FName NAME_ATankzGameModeBase_GameStart = FName(TEXT("GameStart"));
	void ATankzGameModeBase::GameStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATankzGameModeBase_GameStart),NULL);
	}
	void ATankzGameModeBase::StaticRegisterNativesATankzGameModeBase()
	{
	}
	struct Z_Construct_UFunction_ATankzGameModeBase_GameOver_Statics
	{
		static void NewProp_PlayerWon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PlayerWon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATankzGameModeBase_GameOver_Statics::NewProp_PlayerWon_SetBit(void* Obj)
	{
		((TankzGameModeBase_eventGameOver_Parms*)Obj)->PlayerWon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATankzGameModeBase_GameOver_Statics::NewProp_PlayerWon = { "PlayerWon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TankzGameModeBase_eventGameOver_Parms), &Z_Construct_UFunction_ATankzGameModeBase_GameOver_Statics::NewProp_PlayerWon_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATankzGameModeBase_GameOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankzGameModeBase_GameOver_Statics::NewProp_PlayerWon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankzGameModeBase_GameOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankzGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankzGameModeBase_GameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankzGameModeBase, nullptr, "GameOver", nullptr, nullptr, sizeof(TankzGameModeBase_eventGameOver_Parms), Z_Construct_UFunction_ATankzGameModeBase_GameOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankzGameModeBase_GameOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankzGameModeBase_GameOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankzGameModeBase_GameOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankzGameModeBase_GameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATankzGameModeBase_GameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankzGameModeBase_GameStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankzGameModeBase_GameStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankzGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankzGameModeBase_GameStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankzGameModeBase, nullptr, "GameStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankzGameModeBase_GameStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankzGameModeBase_GameStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankzGameModeBase_GameStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATankzGameModeBase_GameStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATankzGameModeBase_NoRegister()
	{
		return ATankzGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATankzGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_StartDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerTank_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerTank;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankzGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tankz,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATankzGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATankzGameModeBase_GameOver, "GameOver" }, // 4010626364
		{ &Z_Construct_UFunction_ATankzGameModeBase_GameStart, "GameStart" }, // 738085362
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankzGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TankzGameModeBase.h" },
		{ "ModuleRelativePath", "TankzGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankzGameModeBase_Statics::NewProp_StartDelay_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Game Loop" },
		{ "ModuleRelativePath", "TankzGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATankzGameModeBase_Statics::NewProp_StartDelay = { "StartDelay", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankzGameModeBase, StartDelay), METADATA_PARAMS(Z_Construct_UClass_ATankzGameModeBase_Statics::NewProp_StartDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankzGameModeBase_Statics::NewProp_StartDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankzGameModeBase_Statics::NewProp_PlayerTank_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Player" },
		{ "ModuleRelativePath", "TankzGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankzGameModeBase_Statics::NewProp_PlayerTank = { "PlayerTank", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankzGameModeBase, PlayerTank), Z_Construct_UClass_ATank_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankzGameModeBase_Statics::NewProp_PlayerTank_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankzGameModeBase_Statics::NewProp_PlayerTank_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATankzGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankzGameModeBase_Statics::NewProp_StartDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankzGameModeBase_Statics::NewProp_PlayerTank,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankzGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankzGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATankzGameModeBase_Statics::ClassParams = {
		&ATankzGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATankzGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATankzGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATankzGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATankzGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankzGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATankzGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATankzGameModeBase, 2962258079);
	template<> TANKZ_API UClass* StaticClass<ATankzGameModeBase>()
	{
		return ATankzGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATankzGameModeBase(Z_Construct_UClass_ATankzGameModeBase, &ATankzGameModeBase::StaticClass, TEXT("/Script/Tankz"), TEXT("ATankzGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankzGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
