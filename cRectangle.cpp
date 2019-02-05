#include "cRectangle.h"



cRectangle::cRectangle() : cShape() {
}

cRectangle::cRectangle(float width, float height) : cShape(width, height)
{
}


cRectangle::~cRectangle()
{
}

float cRectangle::GetArea()
{
	return (m_width * m_height);
}
