// Fill out your copyright notice in the Description page of Project Settings.

#include "VR_Character.h"
#include "Camera/CameraComponent.h"
#include "TimerManager.h"

// Sets default values
AVR_Character::AVR_Character()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	PlayerRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = PlayerRoot;

	VRRoot = CreateDefaultSubobject<USceneComponent>(TEXT("VRRoot"));
	VRRoot->SetupAttachment(PlayerRoot);

	CameraRoot = CreateDefaultSubobject<USceneComponent>(TEXT("CameraRoot"));
	CameraRoot->SetupAttachment(VRRoot);

	VRCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("VRCamera"));
	VRCamera->SetupAttachment(CameraRoot);

	LeftHand = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("Left"));
	LeftHand->SetupAttachment(VRRoot);

	RightHand = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("Right"));
	RightHand->SetupAttachment(VRRoot);

	StateComponent = CreateDefaultSubobject<UBaseStateComponent>(TEXT("State"));
	AddOwnedComponent(StateComponent);

	LeftHand->Hand = EControllerHand::Left;
	RightHand->Hand = EControllerHand::Right;

	BlockTime = 0.0f;
}

// Called when the game starts or when spawned
void AVR_Character::BeginPlay()
{
	Super::BeginPlay();
	
	UpdateHitBack();
}

// Called every frame
void AVR_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AVR_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}



void AVR_Character::UpdateHitBack()
{
	GetWorldTimerManager().SetTimer(BlockHandle, this, &AVR_Character::HandleHitBack, false, 1.0f);
}

void AVR_Character::HandleHitBack()
{
	BlockTime++;
	if (CanHitBack)
	{
		BlockTime = 0.0f;
	}
	else
	{
		if (BlockTime > 5.0f)
		{
			CanHitBack = true;
		}
	}

	GetWorldTimerManager().SetTimer(BlockHandle, this, &AVR_Character::HandleHitBack, false, 1.0f);
}

bool AVR_Character::HitEnemyBack()
{
	if (CanHitBack)
	{
		CanHitBack = false;
		return true;
	}
	else 
	{
		return false;
	}
	
}
