// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLE_BattleGameMode_generated_h
#error "BattleGameMode.generated.h already included, missing '#pragma once' in BattleGameMode.h"
#endif
#define BATTLE_BattleGameMode_generated_h

#define Battle_Source_Battle_BattleGameMode_h_12_RPC_WRAPPERS
#define Battle_Source_Battle_BattleGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Battle_Source_Battle_BattleGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABattleGameMode(); \
	friend BATTLE_API class UClass* Z_Construct_UClass_ABattleGameMode(); \
public: \
	DECLARE_CLASS(ABattleGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Battle"), BATTLE_API) \
	DECLARE_SERIALIZER(ABattleGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Battle_Source_Battle_BattleGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABattleGameMode(); \
	friend BATTLE_API class UClass* Z_Construct_UClass_ABattleGameMode(); \
public: \
	DECLARE_CLASS(ABattleGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Battle"), BATTLE_API) \
	DECLARE_SERIALIZER(ABattleGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Battle_Source_Battle_BattleGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BATTLE_API ABattleGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABattleGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BATTLE_API, ABattleGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABattleGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BATTLE_API ABattleGameMode(ABattleGameMode&&); \
	BATTLE_API ABattleGameMode(const ABattleGameMode&); \
public:


#define Battle_Source_Battle_BattleGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BATTLE_API ABattleGameMode(ABattleGameMode&&); \
	BATTLE_API ABattleGameMode(const ABattleGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BATTLE_API, ABattleGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABattleGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABattleGameMode)


#define Battle_Source_Battle_BattleGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Battle_Source_Battle_BattleGameMode_h_9_PROLOG
#define Battle_Source_Battle_BattleGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battle_Source_Battle_BattleGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Battle_Source_Battle_BattleGameMode_h_12_RPC_WRAPPERS \
	Battle_Source_Battle_BattleGameMode_h_12_INCLASS \
	Battle_Source_Battle_BattleGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Battle_Source_Battle_BattleGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battle_Source_Battle_BattleGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Battle_Source_Battle_BattleGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Battle_Source_Battle_BattleGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Battle_Source_Battle_BattleGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Battle_Source_Battle_BattleGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
