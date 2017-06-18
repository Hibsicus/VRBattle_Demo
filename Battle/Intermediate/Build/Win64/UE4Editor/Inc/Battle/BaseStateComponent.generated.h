// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBaseStateComponent;
#ifdef BATTLE_BaseStateComponent_generated_h
#error "BaseStateComponent.generated.h already included, missing '#pragma once' in BaseStateComponent.h"
#endif
#define BATTLE_BaseStateComponent_generated_h

#define Battle_Source_Battle_BaseStateComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCusorDamage) \
	{ \
		P_GET_OBJECT(UBaseStateComponent,Z_Param_DamageComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->CusorDamage(Z_Param_DamageComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCaculaterDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_GET_UBOOL_REF(Z_Param_Out_IsDead); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_CurrentHP); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CaculaterDamage(Z_Param_Damage,Z_Param_Out_IsDead,Z_Param_Out_CurrentHP); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateState(); \
		P_NATIVE_END; \
	}


#define Battle_Source_Battle_BaseStateComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCusorDamage) \
	{ \
		P_GET_OBJECT(UBaseStateComponent,Z_Param_DamageComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->CusorDamage(Z_Param_DamageComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCaculaterDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_GET_UBOOL_REF(Z_Param_Out_IsDead); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_CurrentHP); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CaculaterDamage(Z_Param_Damage,Z_Param_Out_IsDead,Z_Param_Out_CurrentHP); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateState(); \
		P_NATIVE_END; \
	}


#define Battle_Source_Battle_BaseStateComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseStateComponent(); \
	friend BATTLE_API class UClass* Z_Construct_UClass_UBaseStateComponent(); \
public: \
	DECLARE_CLASS(UBaseStateComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Battle"), NO_API) \
	DECLARE_SERIALIZER(UBaseStateComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Battle_Source_Battle_BaseStateComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUBaseStateComponent(); \
	friend BATTLE_API class UClass* Z_Construct_UClass_UBaseStateComponent(); \
public: \
	DECLARE_CLASS(UBaseStateComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Battle"), NO_API) \
	DECLARE_SERIALIZER(UBaseStateComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Battle_Source_Battle_BaseStateComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseStateComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseStateComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseStateComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseStateComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseStateComponent(UBaseStateComponent&&); \
	NO_API UBaseStateComponent(const UBaseStateComponent&); \
public:


#define Battle_Source_Battle_BaseStateComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseStateComponent(UBaseStateComponent&&); \
	NO_API UBaseStateComponent(const UBaseStateComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseStateComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseStateComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseStateComponent)


#define Battle_Source_Battle_BaseStateComponent_h_13_PRIVATE_PROPERTY_OFFSET
#define Battle_Source_Battle_BaseStateComponent_h_10_PROLOG
#define Battle_Source_Battle_BaseStateComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battle_Source_Battle_BaseStateComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	Battle_Source_Battle_BaseStateComponent_h_13_RPC_WRAPPERS \
	Battle_Source_Battle_BaseStateComponent_h_13_INCLASS \
	Battle_Source_Battle_BaseStateComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Battle_Source_Battle_BaseStateComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battle_Source_Battle_BaseStateComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	Battle_Source_Battle_BaseStateComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Battle_Source_Battle_BaseStateComponent_h_13_INCLASS_NO_PURE_DECLS \
	Battle_Source_Battle_BaseStateComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Battle_Source_Battle_BaseStateComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
