// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLE_EnemyController_generated_h
#error "EnemyController.generated.h already included, missing '#pragma once' in EnemyController.h"
#endif
#define BATTLE_EnemyController_generated_h

#define Battle_Source_Battle_EnemyController_h_15_RPC_WRAPPERS
#define Battle_Source_Battle_EnemyController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Battle_Source_Battle_EnemyController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyController(); \
	friend BATTLE_API class UClass* Z_Construct_UClass_AEnemyController(); \
public: \
	DECLARE_CLASS(AEnemyController, AAIController, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Battle"), NO_API) \
	DECLARE_SERIALIZER(AEnemyController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Battle_Source_Battle_EnemyController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyController(); \
	friend BATTLE_API class UClass* Z_Construct_UClass_AEnemyController(); \
public: \
	DECLARE_CLASS(AEnemyController, AAIController, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Battle"), NO_API) \
	DECLARE_SERIALIZER(AEnemyController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Battle_Source_Battle_EnemyController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyController(AEnemyController&&); \
	NO_API AEnemyController(const AEnemyController&); \
public:


#define Battle_Source_Battle_EnemyController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyController(AEnemyController&&); \
	NO_API AEnemyController(const AEnemyController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyController)


#define Battle_Source_Battle_EnemyController_h_15_PRIVATE_PROPERTY_OFFSET
#define Battle_Source_Battle_EnemyController_h_12_PROLOG
#define Battle_Source_Battle_EnemyController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battle_Source_Battle_EnemyController_h_15_PRIVATE_PROPERTY_OFFSET \
	Battle_Source_Battle_EnemyController_h_15_RPC_WRAPPERS \
	Battle_Source_Battle_EnemyController_h_15_INCLASS \
	Battle_Source_Battle_EnemyController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Battle_Source_Battle_EnemyController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battle_Source_Battle_EnemyController_h_15_PRIVATE_PROPERTY_OFFSET \
	Battle_Source_Battle_EnemyController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Battle_Source_Battle_EnemyController_h_15_INCLASS_NO_PURE_DECLS \
	Battle_Source_Battle_EnemyController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Battle_Source_Battle_EnemyController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
