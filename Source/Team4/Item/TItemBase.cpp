#include "TItemBase.h"


ATItemBase::ATItemBase()
{
	PrimaryActorTick.bCanEverTick = true;
}


void ATItemBase::BeginPlay()
{
	Super::BeginPlay();
}

