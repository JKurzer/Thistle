// Fill out your copyright notice in the Description page of Project Settings.


#include "ThistleInject.h"
#include "ArtilleryDispatch.h"

// Sets default values
AThistleInject::AThistleInject()
{
	LKeyCarry = CreateDefaultSubobject<UKeyCarry>(TEXT("ActorKeyComponent"));
	LKeyCarry->AttemptRegister();
	BarragePhysicsAgent = CreateDefaultSubobject<UBarrageAutoBox>(TEXT("Barrage Physics Agent"));
	ArtilleryStateMachine = CreateDefaultSubobject<UEnemyMachine>(TEXT("Artillery Enemy Machine"));
	
}

// grab FBLet (fiblet) and apply force to it
// UBarragePrimitive Apply Force

// Called when the game starts or when spawned
void AThistleInject::BeginPlay()
{
	Super::BeginPlay();
	if(!IsDefaultSubobject())
	{
		FArtilleryRunLocomotionFromDispatch Inbound;
		Inbound.BindUObject(this, &AThistleInject::LocomotionStateMachine);
		TMap<AttribKey, double> MyAttributes = TMap<AttribKey, double>();
		MyAttributes.Add(HEALTH, 1000);
		MyAttributes.Add(MAX_HEALTH, 1000);
		MyAttributes.Add(Attr::HealthRechargePerTick, 0);
		MyAttributes.Add(MANA, 1000);
		MyAttributes.Add(MAX_MANA, 1000);
		MyAttributes.Add(Attr::ManaRechargePerTick, 10);
		MyKey = ArtilleryStateMachine->CompleteRegistrationByActorParent(MyAttributes);
		// ArtilleryStateMachine->MyDispatch->GENERATE_RECHARGE(MyKey);
	}
	
}

bool AThistleInject::LocomotionStateMachine(FArtilleryShell PriorMovement, FArtilleryShell Movement,
	bool RunAtLeastOnce, bool Smear)
{
	// MoveToPoint(FVector3f(-5050.0, 2340.0, 30.0));
	return true;
}

// Called every frame
void AThistleInject::Tick(float DeltaTime)
{
	// AddForce(FVector3f(0, 1, 0)*10000000);
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AThistleInject::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

