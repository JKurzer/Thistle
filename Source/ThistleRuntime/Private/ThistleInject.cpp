// Fill out your copyright notice in the Description page of Project Settings.


#include "ThistleInject.h"
#include "ArtilleryDispatch.h"

// Sets default values
AThistleInject::AThistleInject()
{
	LKeyCarry = CreateDefaultSubobject<UKeyCarry>(TEXT("ActorKeyComponent"));
	BarragePhysicsAgent = CreateDefaultSubobject<UBarragePlayerAgent>(TEXT("Barrage Physics Agent"));
	ArtilleryStateMachine = CreateDefaultSubobject<UEnemyMachine>(TEXT("Artillery Enemy Machine"));
	
	LKeyCarry->AttemptRegister();
	auto CapRef = GetCapsuleComponent();
    BarragePhysicsAgent->extent = CapRef->GetScaledCapsuleHalfHeight() * 1.01;
    BarragePhysicsAgent->radius = CapRef->GetScaledCapsuleRadius() * 1.01;
}

// Called when the game starts or when spawned
void AThistleInject::BeginPlay()
{
	Super::BeginPlay();
	if(!IsDefaultSubobject())
	{
		TMap<AttribKey, double> MyAttributes = TMap<AttribKey, double>();
		MyAttributes.Add(HEALTH, 1000);
		MyAttributes.Add(MAX_HEALTH, 1000);
		MyAttributes.Add(Attr::HealthRechargePerTick, 0);
		MyAttributes.Add(MANA, 1000);
		MyAttributes.Add(MAX_MANA, 1000);
		MyAttributes.Add(Attr::ManaRechargePerTick, 10);
		MyKey = ArtilleryStateMachine->CompleteRegistrationByActorParent(MyAttributes);
		ArtilleryStateMachine->MyDispatch->GENERATE_RECHARGE(MyKey);
	}
}

// Called every frame
void AThistleInject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AThistleInject::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

