#include "Bullet.h"
#include "Player.h"


void Bullet::BeginPlay()
{
	Super::BeginPlay();
	RenderImage.Create({ 1, 1 }, 'I');
}

void Bullet::Tick()
{
	Super::Tick();
}


// SetActorLocation, AddActorLocation �Լ��� �������°ͺ���