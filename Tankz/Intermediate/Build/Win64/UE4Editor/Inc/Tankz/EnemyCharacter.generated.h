// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKZ_EnemyCharacter_generated_h
#error "EnemyCharacter.generated.h already included, missing '#pragma once' in EnemyCharacter.h"
#endif
#define TANKZ_EnemyCharacter_generated_h

#define Tankz_Source_Tankz_EnemyCharacter_h_15_SPARSE_DATA
#define Tankz_Source_Tankz_EnemyCharacter_h_15_RPC_WRAPPERS
#define Tankz_Source_Tankz_EnemyCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Tankz_Source_Tankz_EnemyCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyCharacter(); \
	friend struct Z_Construct_UClass_AEnemyCharacter_Statics; \
public: \
	DECLARE_CLASS(AEnemyCharacter, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankz"), NO_API) \
	DECLARE_SERIALIZER(AEnemyCharacter)


#define Tankz_Source_Tankz_EnemyCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyCharacter(); \
	friend struct Z_Construct_UClass_AEnemyCharacter_Statics; \
public: \
	DECLARE_CLASS(AEnemyCharacter, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankz"), NO_API) \
	DECLARE_SERIALIZER(AEnemyCharacter)


#define Tankz_Source_Tankz_EnemyCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyCharacter(AEnemyCharacter&&); \
	NO_API AEnemyCharacter(const AEnemyCharacter&); \
public:


#define Tankz_Source_Tankz_EnemyCharacter_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyCharacter() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyCharacter(AEnemyCharacter&&); \
	NO_API AEnemyCharacter(const AEnemyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyCharacter)


#define Tankz_Source_Tankz_EnemyCharacter_h_15_PRIVATE_PROPERTY_OFFSET
#define Tankz_Source_Tankz_EnemyCharacter_h_12_PROLOG
#define Tankz_Source_Tankz_EnemyCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankz_Source_Tankz_EnemyCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Tankz_Source_Tankz_EnemyCharacter_h_15_SPARSE_DATA \
	Tankz_Source_Tankz_EnemyCharacter_h_15_RPC_WRAPPERS \
	Tankz_Source_Tankz_EnemyCharacter_h_15_INCLASS \
	Tankz_Source_Tankz_EnemyCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tankz_Source_Tankz_EnemyCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tankz_Source_Tankz_EnemyCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Tankz_Source_Tankz_EnemyCharacter_h_15_SPARSE_DATA \
	Tankz_Source_Tankz_EnemyCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Tankz_Source_Tankz_EnemyCharacter_h_15_INCLASS_NO_PURE_DECLS \
	Tankz_Source_Tankz_EnemyCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKZ_API UClass* StaticClass<class AEnemyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tankz_Source_Tankz_EnemyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
