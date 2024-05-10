// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "AIController.h"
#include "ThistleTestService.generated.h"

/**
 * 
 */
UCLASS()
class THISTLERUNTIME_API UThistleTestService : public UBTService
{
	GENERATED_BODY()

public:
	UThistleTestService(const FObjectInitializer& ObjInit);

protected:
	// Event Receive Activation (Blueprint)
	virtual void OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	// Event Receive Deactivation (Blueprint)
	virtual void OnCeaseRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	// Event Receive Tick (Blueprint)
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	// Event Receive Search Start (Blueprint)
	virtual void OnSearchStart(FBehaviorTreeSearchData& SearchData) override;

};
