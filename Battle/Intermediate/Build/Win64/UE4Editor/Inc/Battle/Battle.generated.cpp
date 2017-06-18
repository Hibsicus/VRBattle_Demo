// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Battle.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1Battle() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	AIMODULE_API class UClass* Z_Construct_UClass_AAIController();
	ENGINE_API class UClass* Z_Construct_UClass_APawn();
	ENGINE_API class UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API class UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();

	BATTLE_API class UFunction* Z_Construct_UFunction_UBaseStateComponent_CaculaterDamage();
	BATTLE_API class UFunction* Z_Construct_UFunction_UBaseStateComponent_CusorDamage();
	BATTLE_API class UFunction* Z_Construct_UFunction_UBaseStateComponent_UpdateState();
	BATTLE_API class UClass* Z_Construct_UClass_UBaseStateComponent_NoRegister();
	BATTLE_API class UClass* Z_Construct_UClass_UBaseStateComponent();
	BATTLE_API class UClass* Z_Construct_UClass_ABattleCharacter_NoRegister();
	BATTLE_API class UClass* Z_Construct_UClass_ABattleCharacter();
	BATTLE_API class UClass* Z_Construct_UClass_ABattleGameMode_NoRegister();
	BATTLE_API class UClass* Z_Construct_UClass_ABattleGameMode();
	BATTLE_API class UClass* Z_Construct_UClass_AEnemy_NoRegister();
	BATTLE_API class UClass* Z_Construct_UClass_AEnemy();
	BATTLE_API class UClass* Z_Construct_UClass_AEnemyController_NoRegister();
	BATTLE_API class UClass* Z_Construct_UClass_AEnemyController();
	BATTLE_API class UFunction* Z_Construct_UFunction_AVR_Character_HitEnemyBack();
	BATTLE_API class UClass* Z_Construct_UClass_AVR_Character_NoRegister();
	BATTLE_API class UClass* Z_Construct_UClass_AVR_Character();
	BATTLE_API class UPackage* Z_Construct_UPackage__Script_Battle();
	void UBaseStateComponent::StaticRegisterNativesUBaseStateComponent()
	{
		UClass* Class = UBaseStateComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "CaculaterDamage", (Native)&UBaseStateComponent::execCaculaterDamage },
			{ "CusorDamage", (Native)&UBaseStateComponent::execCusorDamage },
			{ "UpdateState", (Native)&UBaseStateComponent::execUpdateState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 3);
	}
	UFunction* Z_Construct_UFunction_UBaseStateComponent_CaculaterDamage()
	{
		struct BaseStateComponent_eventCaculaterDamage_Parms
		{
			float Damage;
			bool IsDead;
			float CurrentHP;
		};
		UObject* Outer=Z_Construct_UClass_UBaseStateComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CaculaterDamage"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(BaseStateComponent_eventCaculaterDamage_Parms));
			UProperty* NewProp_CurrentHP = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CurrentHP"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentHP, BaseStateComponent_eventCaculaterDamage_Parms), 0x0010000000000180);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(IsDead, BaseStateComponent_eventCaculaterDamage_Parms, bool);
			UProperty* NewProp_IsDead = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("IsDead"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(IsDead, BaseStateComponent_eventCaculaterDamage_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(IsDead, BaseStateComponent_eventCaculaterDamage_Parms), sizeof(bool), true);
			UProperty* NewProp_Damage = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Damage"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Damage, BaseStateComponent_eventCaculaterDamage_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Damage"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BaseStateComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBaseStateComponent_CusorDamage()
	{
		struct BaseStateComponent_eventCusorDamage_Parms
		{
			UBaseStateComponent* DamageComponent;
			float ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UBaseStateComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CusorDamage"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14020401, 65535, sizeof(BaseStateComponent_eventCusorDamage_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, BaseStateComponent_eventCusorDamage_Parms), 0x0010000000000580);
			UProperty* NewProp_DamageComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DamageComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DamageComponent, BaseStateComponent_eventCusorDamage_Parms), 0x0010000000080080, Z_Construct_UClass_UBaseStateComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Damage"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BaseStateComponent.h"));
			MetaData->SetValue(NewProp_DamageComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBaseStateComponent_UpdateState()
	{
		UObject* Outer=Z_Construct_UClass_UBaseStateComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UpdateState"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04080401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Update"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BaseStateComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseStateComponent_NoRegister()
	{
		return UBaseStateComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UBaseStateComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_Battle();
			OuterClass = UBaseStateComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;

				OuterClass->LinkChild(Z_Construct_UFunction_UBaseStateComponent_CaculaterDamage());
				OuterClass->LinkChild(Z_Construct_UFunction_UBaseStateComponent_CusorDamage());
				OuterClass->LinkChild(Z_Construct_UFunction_UBaseStateComponent_UpdateState());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_DizzyTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DizzyTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DizzyTime, UBaseStateComponent), 0x0010000000000005);
				UProperty* NewProp_STR = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("STR"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(STR, UBaseStateComponent), 0x0010000000000005);
				UProperty* NewProp_VIT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VIT"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(VIT, UBaseStateComponent), 0x0010000000000005);
				UProperty* NewProp_CurrentArmor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentArmor"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentArmor, UBaseStateComponent), 0x0010000000020005);
				UProperty* NewProp_MaxArmor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxArmor"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxArmor, UBaseStateComponent), 0x0010000000020005);
				UProperty* NewProp_CurrentHP = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentHP"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentHP, UBaseStateComponent), 0x0010000000020005);
				UProperty* NewProp_MaxHP = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxHP"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxHP, UBaseStateComponent), 0x0010000000020005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(IsBoss, UBaseStateComponent, bool);
				UProperty* NewProp_IsBoss = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IsBoss"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(IsBoss, UBaseStateComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(IsBoss, UBaseStateComponent), sizeof(bool), true);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UBaseStateComponent_CaculaterDamage(), "CaculaterDamage"); // 4259844108
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UBaseStateComponent_CusorDamage(), "CusorDamage"); // 2937982137
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UBaseStateComponent_UpdateState(), "UpdateState"); // 3450367837
				static TCppClassTypeInfo<TCppClassTypeTraits<UBaseStateComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BaseStateComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BaseStateComponent.h"));
				MetaData->SetValue(NewProp_DizzyTime, TEXT("Category"), TEXT("Dizzy"));
				MetaData->SetValue(NewProp_DizzyTime, TEXT("ModuleRelativePath"), TEXT("BaseStateComponent.h"));
				MetaData->SetValue(NewProp_STR, TEXT("Category"), TEXT("STR"));
				MetaData->SetValue(NewProp_STR, TEXT("ModuleRelativePath"), TEXT("BaseStateComponent.h"));
				MetaData->SetValue(NewProp_VIT, TEXT("Category"), TEXT("VIT"));
				MetaData->SetValue(NewProp_VIT, TEXT("ModuleRelativePath"), TEXT("BaseStateComponent.h"));
				MetaData->SetValue(NewProp_CurrentArmor, TEXT("Category"), TEXT("Armor"));
				MetaData->SetValue(NewProp_CurrentArmor, TEXT("ModuleRelativePath"), TEXT("BaseStateComponent.h"));
				MetaData->SetValue(NewProp_MaxArmor, TEXT("Category"), TEXT("Armor"));
				MetaData->SetValue(NewProp_MaxArmor, TEXT("ModuleRelativePath"), TEXT("BaseStateComponent.h"));
				MetaData->SetValue(NewProp_CurrentHP, TEXT("Category"), TEXT("HP"));
				MetaData->SetValue(NewProp_CurrentHP, TEXT("ModuleRelativePath"), TEXT("BaseStateComponent.h"));
				MetaData->SetValue(NewProp_MaxHP, TEXT("Category"), TEXT("HP"));
				MetaData->SetValue(NewProp_MaxHP, TEXT("ModuleRelativePath"), TEXT("BaseStateComponent.h"));
				MetaData->SetValue(NewProp_IsBoss, TEXT("Category"), TEXT("Mode"));
				MetaData->SetValue(NewProp_IsBoss, TEXT("ModuleRelativePath"), TEXT("BaseStateComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseStateComponent, 2743993892);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseStateComponent(Z_Construct_UClass_UBaseStateComponent, &UBaseStateComponent::StaticClass, TEXT("/Script/Battle"), TEXT("UBaseStateComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseStateComponent);
	void ABattleCharacter::StaticRegisterNativesABattleCharacter()
	{
	}
	UClass* Z_Construct_UClass_ABattleCharacter_NoRegister()
	{
		return ABattleCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ABattleCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_Battle();
			OuterClass = ABattleCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_BaseLookUpRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseLookUpRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseLookUpRate, ABattleCharacter), 0x0010000000020015);
				UProperty* NewProp_BaseTurnRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseTurnRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseTurnRate, ABattleCharacter), 0x0010000000020015);
				UProperty* NewProp_FollowCamera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FollowCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FollowCamera, ABattleCharacter), 0x00400000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_CameraBoom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraBoom"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraBoom, ABattleCharacter), 0x00400000000a001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ABattleCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BattleCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BattleCharacter.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ModuleRelativePath"), TEXT("BattleCharacter.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ToolTip"), TEXT("Base look up/down rate, in deg/sec. Other scaling may affect final rate."));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ModuleRelativePath"), TEXT("BattleCharacter.h"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ToolTip"), TEXT("Base turn rate, in deg/sec. Other scaling may affect final turn rate."));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("ModuleRelativePath"), TEXT("BattleCharacter.h"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("ToolTip"), TEXT("Follow camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ModuleRelativePath"), TEXT("BattleCharacter.h"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ToolTip"), TEXT("Camera boom positioning the camera behind the character"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABattleCharacter, 3656151368);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABattleCharacter(Z_Construct_UClass_ABattleCharacter, &ABattleCharacter::StaticClass, TEXT("/Script/Battle"), TEXT("ABattleCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABattleCharacter);
	void ABattleGameMode::StaticRegisterNativesABattleGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABattleGameMode_NoRegister()
	{
		return ABattleGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ABattleGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_Battle();
			OuterClass = ABattleGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20880288;


				static TCppClassTypeInfo<TCppClassTypeTraits<ABattleGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BattleGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BattleGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABattleGameMode, 1908734024);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABattleGameMode(Z_Construct_UClass_ABattleGameMode, &ABattleGameMode::StaticClass, TEXT("/Script/Battle"), TEXT("ABattleGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABattleGameMode);
	void AEnemy::StaticRegisterNativesAEnemy()
	{
	}
	UClass* Z_Construct_UClass_AEnemy_NoRegister()
	{
		return AEnemy::StaticClass();
	}
	UClass* Z_Construct_UClass_AEnemy()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_Battle();
			OuterClass = AEnemy::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_StateComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StateComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(StateComponent, AEnemy), 0x00100000000a001d, Z_Construct_UClass_UBaseStateComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<AEnemy> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Enemy.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Enemy.h"));
				MetaData->SetValue(NewProp_StateComponent, TEXT("Category"), TEXT("State"));
				MetaData->SetValue(NewProp_StateComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_StateComponent, TEXT("ModuleRelativePath"), TEXT("Enemy.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemy, 3189746863);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemy(Z_Construct_UClass_AEnemy, &AEnemy::StaticClass, TEXT("/Script/Battle"), TEXT("AEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy);
	void AEnemyController::StaticRegisterNativesAEnemyController()
	{
	}
	UClass* Z_Construct_UClass_AEnemyController_NoRegister()
	{
		return AEnemyController::StaticClass();
	}
	UClass* Z_Construct_UClass_AEnemyController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AAIController();
			Z_Construct_UPackage__Script_Battle();
			OuterClass = AEnemyController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900280;


				static TCppClassTypeInfo<TCppClassTypeTraits<AEnemyController> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("EnemyController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("EnemyController.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyController, 4270815400);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyController(Z_Construct_UClass_AEnemyController, &AEnemyController::StaticClass, TEXT("/Script/Battle"), TEXT("AEnemyController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyController);
	void AVR_Character::StaticRegisterNativesAVR_Character()
	{
		UClass* Class = AVR_Character::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "HitEnemyBack", (Native)&AVR_Character::execHitEnemyBack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_AVR_Character_HitEnemyBack()
	{
		struct VR_Character_eventHitEnemyBack_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_AVR_Character();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("HitEnemyBack"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(VR_Character_eventHitEnemyBack_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, VR_Character_eventHitEnemyBack_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, VR_Character_eventHitEnemyBack_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, VR_Character_eventHitEnemyBack_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Back"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("VR_Character.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVR_Character_NoRegister()
	{
		return AVR_Character::StaticClass();
	}
	UClass* Z_Construct_UClass_AVR_Character()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_Battle();
			OuterClass = AVR_Character::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AVR_Character_HitEnemyBack());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_StateComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StateComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(StateComponent, AVR_Character), 0x00100000000a001d, Z_Construct_UClass_UBaseStateComponent_NoRegister());
				UProperty* NewProp_VRCamera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VRCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(VRCamera, AVR_Character), 0x00100000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_CameraRoot = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraRoot"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraRoot, AVR_Character), 0x00100000000a001d, Z_Construct_UClass_USceneComponent_NoRegister());
				UProperty* NewProp_VRRoot = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VRRoot"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(VRRoot, AVR_Character), 0x00100000000a001d, Z_Construct_UClass_USceneComponent_NoRegister());
				UProperty* NewProp_PlayerRoot = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PlayerRoot"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PlayerRoot, AVR_Character), 0x00100000000a001d, Z_Construct_UClass_USceneComponent_NoRegister());
				UProperty* NewProp_RightHand = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RightHand"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(RightHand, AVR_Character), 0x00100000000a001d, Z_Construct_UClass_UMotionControllerComponent_NoRegister());
				UProperty* NewProp_LeftHand = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LeftHand"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(LeftHand, AVR_Character), 0x00100000000a001d, Z_Construct_UClass_UMotionControllerComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVR_Character_HitEnemyBack(), "HitEnemyBack"); // 3778232414
				static TCppClassTypeInfo<TCppClassTypeTraits<AVR_Character> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VR_Character.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("VR_Character.h"));
				MetaData->SetValue(NewProp_StateComponent, TEXT("Category"), TEXT("State"));
				MetaData->SetValue(NewProp_StateComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_StateComponent, TEXT("ModuleRelativePath"), TEXT("VR_Character.h"));
				MetaData->SetValue(NewProp_VRCamera, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_VRCamera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_VRCamera, TEXT("ModuleRelativePath"), TEXT("VR_Character.h"));
				MetaData->SetValue(NewProp_CameraRoot, TEXT("Category"), TEXT("Root"));
				MetaData->SetValue(NewProp_CameraRoot, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraRoot, TEXT("ModuleRelativePath"), TEXT("VR_Character.h"));
				MetaData->SetValue(NewProp_VRRoot, TEXT("Category"), TEXT("Root"));
				MetaData->SetValue(NewProp_VRRoot, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_VRRoot, TEXT("ModuleRelativePath"), TEXT("VR_Character.h"));
				MetaData->SetValue(NewProp_PlayerRoot, TEXT("Category"), TEXT("Root"));
				MetaData->SetValue(NewProp_PlayerRoot, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_PlayerRoot, TEXT("ModuleRelativePath"), TEXT("VR_Character.h"));
				MetaData->SetValue(NewProp_RightHand, TEXT("Category"), TEXT("Right"));
				MetaData->SetValue(NewProp_RightHand, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_RightHand, TEXT("ModuleRelativePath"), TEXT("VR_Character.h"));
				MetaData->SetValue(NewProp_LeftHand, TEXT("Category"), TEXT("Left"));
				MetaData->SetValue(NewProp_LeftHand, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_LeftHand, TEXT("ModuleRelativePath"), TEXT("VR_Character.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVR_Character, 2569600899);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVR_Character(Z_Construct_UClass_AVR_Character, &AVR_Character::StaticClass, TEXT("/Script/Battle"), TEXT("AVR_Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVR_Character);
	UPackage* Z_Construct_UPackage__Script_Battle()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/Battle")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x83529ECC;
			Guid.B = 0x75B27348;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
