#include "Prev_Image.h"

void Prev_Image::BeginPlay()
{
	Super::BeginPlay();

	Renderer* Render = CreateDefaultSubObject();
	Render->RenderImage.Create({ 3, 5 }, '@');
}