// Copyright Ryter Productions

#pragma once

#include "CoreMinimal.h"
#include "Characters/AuraCharacterBase.h"
#include "Interactions/EnemyInterface.h"
#include "Enemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AEnemy : public AAuraCharacterBase, public IEnemyInterface 
{
	GENERATED_BODY()

public:
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
	
};
