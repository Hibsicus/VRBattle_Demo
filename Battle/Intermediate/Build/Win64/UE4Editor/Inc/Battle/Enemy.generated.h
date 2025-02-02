// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLE_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define BATTLE_Enemy_generated_h

#define Battle_Source_Battle_Enemy_h_14_RPC_WRAPPERS
#define Battle_Source_Battle_Enemy_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Battle_Source_Battle_Enemy_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend BATTLE_API class UClass* Z_Construct_UClass_AEnemy(); \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Battle"), NO_API) \
	DECLARE_SERIALIZER(AEnemy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Battle_Source_Battle_Enemy_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend BATTLE_API class UClass* Z_Construct_UClass_AEnemy(); \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Battle"), NO_API) \
	DECLARE_SERIALIZER(AEnemy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Battle_Source_Battle_Enemy_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public:


#define Battle_Source_Battle_Enemy_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy)


#define Battle_Source_Battle_Enemy_h_14_PRIVATE_PROPERTY_OFFSET
#define Battle_Source_Battle_Enemy_h_11_PROLOG
#define Battle_Source_Battle_Enemy_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battle_Source_Battle_Enemy_h_14_PRIVATE_PROPERTY_OFFSET \
	Battle_Source_Battle_Enemy_h_14_RPC_WRAPPERS \
	Battle_Source_Battle_Enemy_h_14_INCLASS \
	Battle_Source_Battle_Enemy_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Battle_Source_Battle_Enemy_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battle_Source_Battle_Enemy_h_14_PRIVATE_PROPERTY_OFFSET \
	Battle_Source_Battle_Enemy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Battle_Source_Battle_Enemy_h_14_INCLASS_NO_PURE_DECLS \
	Battle_Source_Battle_Enemy_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Battle_Source_Battle_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
