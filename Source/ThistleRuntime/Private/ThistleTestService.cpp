// Fill out your copyright notice in the Description page of Project Settings.


#include "ThistleTestService.h"

UThistleTestService::UThistleTestService(const FObjectInitializer& ObjInit)
	:Super(ObjInit) {

}

void UThistleTestService::OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::OnBecomeRelevant(OwnerComp, NodeMemory);
}

void UThistleTestService::OnCeaseRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::OnCeaseRelevant(OwnerComp, NodeMemory);
}

void UThistleTestService::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	// Character and controller
	AAIController* MyAIController = OwnerComp.GetAIOwner();
	ACharacter* MyCharacter = Cast<ACharacter>(MyAIController->GetPawn());
}

void UThistleTestService::OnSearchStart(FBehaviorTreeSearchData& SearchData)
{
	Super::OnSearchStart(SearchData);
}