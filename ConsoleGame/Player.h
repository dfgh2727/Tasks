#pragma once
#include "ConsoleImage.h"
#include "Actor.h"


class Player : public AActor
{
public:
	void BeginPlay() override;
	void Tick() override;

private:
};

