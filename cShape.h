#pragma once
class cShape
{
public:
	cShape();
	cShape(float width, float height);
	~cShape();
	virtual float GetArea();
protected:
	float m_width;
	float m_height;
};

