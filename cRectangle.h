#pragma once
#include "cShape.h"
class cRectangle : public cShape
{
public:
	cRectangle();
	cRectangle(float width, float height);
	~cRectangle();
	float GetArea() override;
};

