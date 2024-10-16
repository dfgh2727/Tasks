#pragma once
#include "Actor.h"
#include <vector>

class PrevImage
{
public:
	~PrevImage();

	void Release();

	void RenderPrev();


private:

	std::vector<std::vector<char>> Pixels;
	FIntPoint ImageSize;



};

