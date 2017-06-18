// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLE_BattleCharacter_generated_h
#error "BattleCharacter.generated.h already included, missing '#pragma once' in BattleCharacter.h"
#endif
#define BATTLE_BattleCharacter_generated_h

#define Battle_Source_Battle_BattleCharacter_h_12_RPC_WRAPPERS
#define Battle_Source_Battle_BattleCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Battle_Source_Battle_BattleCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABattleCharacter(); \
	friend BATTLE_API class UClass* Z_Construct_UClass_ABattleCharacter(); \
public: \
	DECLARE_CLASS(ABattleCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Battle"), NO_API) \
	DECLARE_SERIALIZER(ABattleCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Battle_Source_Battle_BattleCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABattleCharacter(); \
	friend BATTLE_API class UClass* Z_Construct_UClass_ABattleCharacter(); \
public: \
	DECLARE_CLASS(ABattleCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Battle"), NO_API) \
	DECLARE_SERIALIZER(ABattleCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Battle_Source_Battle_BattleCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABattleCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABattleCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABattleCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABattleCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABattleCharacter(ABattleCharacter&&); \
	NO_API ABattleCharacter(const ABattleCharacter&); \
public:


#define Battle_Source_Battle_BattleCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABattleCharacter(ABattleCharacter&&); \
	NO_API ABattleCharacter(const ABattleCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABattleCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABattleCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABattleCharacter)


#define Battle_Source_Battle_BattleCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ABattleCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ABattleCharacter, FollowCamera); }


#define Battle_Source_Battle_BattleCharacter_h_9_PROLOG
#define Battle_Source_Battle_BattleCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battle_Source_Battle_BattleCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Battle_Source_Battle_BattleCharacter_h_12_RPC_WRAPPERS \
	Battle_Source_Battle_BattleCharacter_h_12_INCLASS \
	Battle_Source_Battle_BattleCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Battle_Source_Battle_BattleCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battle_Source_Battle_BattleCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Battle_Source_Battle_BattleCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Battle_Source_Battle_BattleCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Battle_Source_Battle_BattleCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Battle_Source_Battle_BattleCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
