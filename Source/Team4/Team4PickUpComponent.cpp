// Copyright Epic Games, Inc. All Rights Reserved.

#include "Team4PickUpComponent.h"

UTeam4PickUpComponent::UTeam4PickUpComponent()
{
	// Setup the Sphere Collision
	SphereRadius = 32.f;
}

void UTeam4PickUpComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register our Overlap Event
	OnComponentBeginOverlap.AddDynamic(this, &UTeam4PickUpComponent::OnSphereBeginOverlap);
}

void UTeam4PickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checking if it is a First Person Character overlapping
	ATeam4Character* Character = Cast<ATeam4Character>(OtherActor);
	if(Character != nullptr)
	{
		// Notify that the actor is being picked up
		OnPickUp.Broadcast(Character);

		// Unregister from the Overlap Event so it is no longer triggered
		OnComponentBeginOverlap.RemoveAll(this);
	}
}
