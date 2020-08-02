// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKZ_TankzController_generated_h
#error "TankzController.generated.h already included, missing '#pragma once' in TankzController.h"
#endif
#define TANKZ_TankzController_generated_h

#define Tankz_Source_Tankz_TankzController_h_15_SPARSE_DATA
#define Tankz_Source_Tankz_TankzController_h_15_RPC_WRAPPERS
#define Tankz_Source_Tankz_TankzController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Tankz_Source_Tankz_TankzController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankzController(); \
	friend struct Z_Construct_UClass_ATankzController_Statics; \
public: \
	DECLARE_CLASS(ATankzController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankz"), NO_API) \
	DECLARE_SERIALIZER(ATankzController)


#define Tankz_Source_Tankz_TankzController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATankzController(); \
	friend struct Z_Construct_UClass_ATankzController_Statics; \
public: \
	DECLARE_CLASS(ATankzController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankz"), NO_API) \
	DECLARE_SERIALIZER(ATankzController)


#define Tankz_Source_Tankz_TankzController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankzController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankzController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankzController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankzController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankzController(ATankzController&&); \
	NO_API ATankzController(const ATankzController&); \
public:


#define Tankz_Source_Tankz_TankzController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankzController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankzController(ATankzController&&); \
	NO_API ATankzController(const ATankzController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankzController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankzController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankzController)


#define Tankz_Source_Tankz_TankzController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HUDClass() { return STRUCT_OFFSET(ATankzController, HUDClass); }


#define Tankz_Source_Tankz_TankzController_h_12_PROLOG
#define Tankz_Source_Tankz_TankzController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankz_Source_Tankz_TankzController_h_15_PRIVATE_PROPERTY_OFFSET \
	Tankz_Source_Tankz_TankzController_h_15_SPARSE_DATA \
	Tankz_Source_Tankz_TankzController_h_15_RPC_WRAPPERS \
	Tankz_Source_Tankz_TankzController_h_15_INCLASS \
	Tankz_Source_Tankz_TankzController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tankz_Source_Tankz_TankzController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankz_Source_Tankz_TankzController_h_15_PRIVATE_PROPERTY_OFFSET \
	Tankz_Source_Tankz_TankzController_h_15_SPARSE_DATA \
	Tankz_Source_Tankz_TankzController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Tankz_Source_Tankz_TankzController_h_15_INCLASS_NO_PURE_DECLS \
	Tankz_Source_Tankz_TankzController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKZ_API UClass* StaticClass<class ATankzController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tankz_Source_Tankz_TankzController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
