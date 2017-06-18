// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLE_VR_Character_generated_h
#error "VR_Character.generated.h already included, missing '#pragma once' in VR_Character.h"
#endif
#define BATTLE_VR_Character_generated_h

#define Battle_Source_Battle_VR_Character_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHitEnemyBack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HitEnemyBack(); \
		P_NATIVE_END; \
	}


#define Battle_Source_Battle_VR_Character_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHitEnemyBack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HitEnemyBack(); \
		P_NATIVE_END; \
	}


#define Battle_Source_Battle_VR_Character_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVR_Character(); \
	friend BATTLE_API class UClass* Z_Construct_UClass_AVR_Character(); \
public: \
	DECLARE_CLASS(AVR_Character, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Battle"), NO_API) \
	DECLARE_SERIALIZER(AVR_Character) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Battle_Source_Battle_VR_Character_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAVR_Character(); \
	friend BATTLE_API class UClass* Z_Construct_UClass_AVR_Character(); \
public: \
	DECLARE_CLASS(AVR_Character, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Battle"), NO_API) \
	DECLARE_SERIALIZER(AVR_Character) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Battle_Source_Battle_VR_Character_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVR_Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVR_Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVR_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVR_Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVR_Character(AVR_Character&&); \
	NO_API AVR_Character(const AVR_Character&); \
public:


#define Battle_Source_Battle_VR_Character_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVR_Character(AVR_Character&&); \
	NO_API AVR_Character(const AVR_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVR_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVR_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVR_Character)


#define Battle_Source_Battle_VR_Character_h_14_PRIVATE_PROPERTY_OFFSET
#define Battle_Source_Battle_VR_Character_h_11_PROLOG
#define Battle_Source_Battle_VR_Character_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battle_Source_Battle_VR_Character_h_14_PRIVATE_PROPERTY_OFFSET \
	Battle_Source_Battle_VR_Character_h_14_RPC_WRAPPERS \
	Battle_Source_Battle_VR_Character_h_14_INCLASS \
	Battle_Source_Battle_VR_Character_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Battle_Source_Battle_VR_Character_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battle_Source_Battle_VR_Character_h_14_PRIVATE_PROPERTY_OFFSET \
	Battle_Source_Battle_VR_Character_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Battle_Source_Battle_VR_Character_h_14_INCLASS_NO_PURE_DECLS \
	Battle_Source_Battle_VR_Character_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Battle_Source_Battle_VR_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
