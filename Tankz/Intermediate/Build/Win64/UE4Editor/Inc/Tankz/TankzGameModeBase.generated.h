// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKZ_TankzGameModeBase_generated_h
#error "TankzGameModeBase.generated.h already included, missing '#pragma once' in TankzGameModeBase.h"
#endif
#define TANKZ_TankzGameModeBase_generated_h

#define Tankz_Source_Tankz_TankzGameModeBase_h_16_SPARSE_DATA
#define Tankz_Source_Tankz_TankzGameModeBase_h_16_RPC_WRAPPERS
#define Tankz_Source_Tankz_TankzGameModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Tankz_Source_Tankz_TankzGameModeBase_h_16_EVENT_PARMS \
	struct TankzGameModeBase_eventGameOver_Parms \
	{ \
		bool PlayerWon; \
	};


#define Tankz_Source_Tankz_TankzGameModeBase_h_16_CALLBACK_WRAPPERS
#define Tankz_Source_Tankz_TankzGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankzGameModeBase(); \
	friend struct Z_Construct_UClass_ATankzGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ATankzGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankz"), NO_API) \
	DECLARE_SERIALIZER(ATankzGameModeBase)


#define Tankz_Source_Tankz_TankzGameModeBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATankzGameModeBase(); \
	friend struct Z_Construct_UClass_ATankzGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ATankzGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankz"), NO_API) \
	DECLARE_SERIALIZER(ATankzGameModeBase)


#define Tankz_Source_Tankz_TankzGameModeBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankzGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankzGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankzGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankzGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankzGameModeBase(ATankzGameModeBase&&); \
	NO_API ATankzGameModeBase(const ATankzGameModeBase&); \
public:


#define Tankz_Source_Tankz_TankzGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankzGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankzGameModeBase(ATankzGameModeBase&&); \
	NO_API ATankzGameModeBase(const ATankzGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankzGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankzGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankzGameModeBase)


#define Tankz_Source_Tankz_TankzGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerTank() { return STRUCT_OFFSET(ATankzGameModeBase, PlayerTank); } \
	FORCEINLINE static uint32 __PPO__StartDelay() { return STRUCT_OFFSET(ATankzGameModeBase, StartDelay); }


#define Tankz_Source_Tankz_TankzGameModeBase_h_13_PROLOG \
	Tankz_Source_Tankz_TankzGameModeBase_h_16_EVENT_PARMS


#define Tankz_Source_Tankz_TankzGameModeBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankz_Source_Tankz_TankzGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	Tankz_Source_Tankz_TankzGameModeBase_h_16_SPARSE_DATA \
	Tankz_Source_Tankz_TankzGameModeBase_h_16_RPC_WRAPPERS \
	Tankz_Source_Tankz_TankzGameModeBase_h_16_CALLBACK_WRAPPERS \
	Tankz_Source_Tankz_TankzGameModeBase_h_16_INCLASS \
	Tankz_Source_Tankz_TankzGameModeBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tankz_Source_Tankz_TankzGameModeBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankz_Source_Tankz_TankzGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	Tankz_Source_Tankz_TankzGameModeBase_h_16_SPARSE_DATA \
	Tankz_Source_Tankz_TankzGameModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Tankz_Source_Tankz_TankzGameModeBase_h_16_CALLBACK_WRAPPERS \
	Tankz_Source_Tankz_TankzGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
	Tankz_Source_Tankz_TankzGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKZ_API UClass* StaticClass<class ATankzGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tankz_Source_Tankz_TankzGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
