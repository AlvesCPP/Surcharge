#include "cShape.h"



cShape::cShape()
{
	m_width = 0;
	m_height = 0;
}


cShape::cShape(float width, float height)
{
	m_width = width;
	m_height = height;
}

cShape::~cShape()
{
}

float cShape::GetArea()
{
	return 0.0f;
}
