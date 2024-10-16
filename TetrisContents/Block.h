#pragma once
#include <EngineCore/Actor.h>
#include <EngineCore/ConsoleImage.h>

class Block : public AActor
{
public:
	void BeginPlay() override;
	void Tick() override;

	
};

