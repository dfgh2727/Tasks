#include "Prev_Image.h"

void Prev_Image::BeginPlay()
{
	Super::BeginPlay();

	Renderer* RenderPrev = CreateDefaultSubObject();
	RenderPrev->RenderImage.Create({ 3, 5 }, '+');
}