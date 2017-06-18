// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BaseStateComponent.h"
#include "MotionControllerComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "VR_Character.generated.h"

UCLASS()
class BATTLE_API AVR_Character : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AVR_Character();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Left")
	class UMotionControllerComponent* LeftHand;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Right")
	class UMotionControllerComponent* RightHand;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Root")
	class USceneComponent* PlayerRoot;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Root")
	class USceneComponent* VRRoot;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Root")
	class USceneComponent* CameraRoot;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class UCameraComponent* VRCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "State")
	class UBaseStateComponent* StateComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "Back")
	bool HitEnemyBack();

private:

	FTimerHandle BlockHandle;
	
	float BlockTime;

	bool CanHitBack;

	void UpdateHitBack();
	void HandleHitBack();
};
