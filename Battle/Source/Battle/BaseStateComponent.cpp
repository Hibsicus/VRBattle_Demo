// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseStateComponent.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values for this component's properties
UBaseStateComponent::UBaseStateComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	IsBoss = false;

	VIT = 10.0f;
	STR = 10.0f;

	UpdateState();
	// ...
}


// Called when the game starts
void UBaseStateComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UBaseStateComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UBaseStateComponent::CaculaterDamage(float Damage, bool & IsDead, float & CurrentHP)
{
	if (IsBoss)
	{
		if (CurrentArmor > 0.0f)
		{
			CurrentArmor -= Damage;
			CurrentHP -= UKismetMathLibrary::RandomFloatInRange(3.0f,6.0f);
			if (CurrentArmor < 0.0f)
				CurrentHP -= CurrentArmor;
		}
		else
		{
			CurrentHP -= Damage;
		}
	}
	else {
		CurrentHP -= Damage;
	}

	if (CurrentHP <= 0.0f)
		IsDead = true;
	else
		IsDead = false;

	CurrentHP = this->CurrentHP;
}

float UBaseStateComponent::CusorDamage(UBaseStateComponent * DamageComponent)
{
	return UKismetMathLibrary::Abs((UKismetMathLibrary::RandomFloatInRange(1.0f, 1.5f) * STR) - (UKismetMathLibrary::RandomFloatInRange(0.8f, 1.2f) * DamageComponent->VIT));
}




void UBaseStateComponent::UpdateState()
{
	if (IsBoss)
	{
		MaxHP = VIT * 100.0f;
		MaxArmor = VIT * 50.0f;

		CurrentHP = MaxHP;
		CurrentArmor = MaxArmor;
	}
	else
	{
		MaxHP = VIT * 80.0f;
		CurrentHP = MaxHP;
	}
}




#if WITH_EDITOR
void UBaseStateComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	UpdateState();
	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif

