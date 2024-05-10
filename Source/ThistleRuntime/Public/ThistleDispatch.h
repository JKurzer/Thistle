// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ThistleDispatch.generated.h"

/**
 * Component for running the dispatch of tasks to units, allowing us to mix Mass and Behaviortree and Statetree
 * transparently, as well as shim RPAI if we like that. Might not be useful at all, see other headers for more!
 * 
 * In particular, start with Treemanager and ThistleInject
 */
UCLASS()
class THISTLERUNTIME_API UThistleDispatch : public UTickableWorldSubsystem
{
	GENERATED_BODY()

protected:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void OnWorldBeginPlay(UWorld& InWorld) override;
	virtual void Deinitialize() override;

	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override;

public:

private:

};
