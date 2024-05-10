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

	//The normal idiom for getting character and controller looks like this:
	//AAIController* MyAIController = OwnerComp.GetAIOwner();
	//ACharacter* MyCharacter = Cast<ACharacter>(MyAIController->GetPawn());
	//where as we may want to allow thistle to decide who owns what and why

	//I suspect we'll end up with 3-4 of these services and a sort of... template for our behavior trees. Not sure yet.
	//ultimately, though, this means that it looks like we can avoid getting locked into needing a pawn class per behavior tree

}

void UThistleTestService::OnSearchStart(FBehaviorTreeSearchData& SearchData)
{
	Super::OnSearchStart(SearchData);
}