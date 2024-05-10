// Fill out your copyright notice in the Description page of Project Settings.


#include "ThistleDispatch.h"

void UThistleDispatch::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	UE_LOG(LogTemp, Warning, TEXT("ThistleDispatch:Subsystem: Inbound and Outbound Queues set to null."));
}

void UThistleDispatch::OnWorldBeginPlay(UWorld& InWorld)
{
	if ([[maybe_unused]] const UWorld* World = InWorld.GetWorld()) {
		UE_LOG(LogTemp, Warning, TEXT("ThistleDispatch:Subsystem: World beginning play"));
	
	}
}

void UThistleDispatch::Deinitialize()
{

	Super::Deinitialize();
}

void UThistleDispatch::Tick(float DeltaTime)
{
}

TStatId UThistleDispatch::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(UThistleDispatch, STATGROUP_Tickables);
}
