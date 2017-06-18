// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseStateComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BATTLE_API UBaseStateComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBaseStateComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "Update")
	void UpdateState();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void PostEditChangeProperty(FPropertyChangedEvent & PropertyChangedEvent);

	UFUNCTION(BlueprintCallable, Category = "Damage")
	void CaculaterDamage(float Damage, bool &IsDead, float &CurrentHP);

	UFUNCTION(BlueprintPure, Category = "Damage")
	float CusorDamage(UBaseStateComponent* DamageComponent);


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mode")
	bool IsBoss;

	UPROPERTY(VIsibleAnywhere, BlueprintReadWrite, Category = "HP")
	float MaxHP;

	UPROPERTY(VIsibleAnywhere, BlueprintReadWrite, Category = "HP")
	float CurrentHP;

	UPROPERTY(VIsibleAnywhere, BlueprintReadWrite, Category = "Armor")
	float MaxArmor;

	UPROPERTY(VIsibleAnywhere, BlueprintReadWrite, Category = "Armor")
	float CurrentArmor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VIT")
	float VIT;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "STR")
	float STR;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dizzy")
	float DizzyTime;

};
