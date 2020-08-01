// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKZ_EnemyAIController_generated_h
#error "EnemyAIController.generated.h already included, missing '#pragma once' in EnemyAIController.h"
#endif
#define TANKZ_EnemyAIController_generated_h

#define Tankz_Source_Tankz_EnemyAIController_h_15_SPARSE_DATA
#define Tankz_Source_Tankz_EnemyAIController_h_15_RPC_WRAPPERS
#define Tankz_Source_Tankz_EnemyAIController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Tankz_Source_Tankz_EnemyAIController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyAIController(); \
	friend struct Z_Construct_UClass_AEnemyAIController_Statics; \
public: \
	DECLARE_CLASS(AEnemyAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankz"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAIController)


#define Tankz_Source_Tankz_EnemyAIController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyAIController(); \
	friend struct Z_Construct_UClass_AEnemyAIController_Statics; \
public: \
	DECLARE_CLASS(AEnemyAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankz"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAIController)


#define Tankz_Source_Tankz_EnemyAIController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAIController(AEnemyAIController&&); \
	NO_API AEnemyAIController(const AEnemyAIController&); \
public:


#define Tankz_Source_Tankz_EnemyAIController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAIController(AEnemyAIController&&); \
	NO_API AEnemyAIController(const AEnemyAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyAIController)


#define Tankz_Source_Tankz_EnemyAIController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AIBehavior() { return STRUCT_OFFSET(AEnemyAIController, AIBehavior); }


#define Tankz_Source_Tankz_EnemyAIController_h_12_PROLOG
#define Tankz_Source_Tankz_EnemyAIController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankz_Source_Tankz_EnemyAIController_h_15_PRIVATE_PROPERTY_OFFSET \
	Tankz_Source_Tankz_EnemyAIController_h_15_SPARSE_DATA \
	Tankz_Source_Tankz_EnemyAIController_h_15_RPC_WRAPPERS \
	Tankz_Source_Tankz_EnemyAIController_h_15_INCLASS \
	Tankz_Source_Tankz_EnemyAIController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tankz_Source_Tankz_EnemyAIController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankz_Source_Tankz_EnemyAIController_h_15_PRIVATE_PROPERTY_OFFSET \
	Tankz_Source_Tankz_EnemyAIController_h_15_SPARSE_DATA \
	Tankz_Source_Tankz_EnemyAIController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Tankz_Source_Tankz_EnemyAIController_h_15_INCLASS_NO_PURE_DECLS \
	Tankz_Source_Tankz_EnemyAIController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKZ_API UClass* StaticClass<class AEnemyAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tankz_Source_Tankz_EnemyAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
