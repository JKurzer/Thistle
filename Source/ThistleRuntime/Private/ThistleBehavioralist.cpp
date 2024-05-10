// Fill out your copyright notice in the Description page of Project Settings.


#include "ThistleBehavioralist.h"

void UThistleBehavioralist::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	UE_LOG(LogTemp, Warning, TEXT("ThistleBehavioralist:Subsystem: Inbound and Outbound Queues set to null."));
}

void UThistleBehavioralist::OnWorldBeginPlay(UWorld& InWorld)
{
	if ([[maybe_unused]] const UWorld* World = InWorld.GetWorld()) {
		UE_LOG(LogTemp, Warning, TEXT("ThistleBehavioralist:Subsystem: World beginning play"));

	}
}

void UThistleBehavioralist::Deinitialize()
{

	Super::Deinitialize();
}

void UThistleBehavioralist::Tick(float DeltaTime)
{
}

TStatId UThistleBehavioralist::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(UThistleDispatch, STATGROUP_Tickables);
}