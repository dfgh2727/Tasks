#pragma once
#include "Actor.h"
#include "Player.h"

class Monster : public AActor
{
public:
	void BeginPlay() override;
	void Tick() override;
};



