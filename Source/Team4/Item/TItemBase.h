#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TItemBase.generated.h"

UCLASS()
class TEAM4_API ATItemBase : public AActor
{
	GENERATED_BODY()
public:
	ATItemBase();

protected:
	virtual void BeginPlay() override;
};
