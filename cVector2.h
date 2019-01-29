#pragma once

#include <math.h>
#include <iostream>
#include <string>

class cVector3;
class cVector2
{
public:
	//Constructors
	cVector2();//Constructeur sans param�tre
	cVector2(cVector2* ptrVect);//Constructeur avec param�tre obligatoire (copie d'un pointeur de vecteur)
	cVector2(float x, float y = 1.0);//Constructeur avec un param�tre par d�faut
	//Accessors
	float GetX() const;
	float GetY() const;
	//Mutators
	void SetXY(float x, float y);
	void SetX(float x);
	void SetY(float y);
	//Operations
	void Mult(float factor);//Multiplication par le scalaire factor.
	//Conversion
	std::string ToString()const;//Conversion des champs de ce vecteur en string.
	//Surcharge
	bool operator==(const cVector2 &otherVect) const;//Surcharge d'op�rateur d'�galit� avec un autre cVector2
	bool operator!=(const cVector2 &otherVect) const;//Surcharge d'op�rateur d'in�galit� avec un autre cVector2
	cVector2 operator+(const cVector2 &otherVect) const;//Surcharge d'op�rateur d'addition avec un autre cVector2
	cVector2 operator-(const cVector2 &otherVect) const;//Surcharge d'op�rateur de soustraction avec un autre cVector2
	cVector2 operator*(const float &mult) const;//Surcharge d'op�rateur de multiplication avec un scalaire
	cVector2& operator+=(const cVector2 &otherVect);//Surcharge d'op�rateur d'affectation additive avec un autre cVector2
	cVector2& operator-=(const cVector2 &otherVect);//Surcharge d'op�rateur d'affection soustractive avec un autre cVector2
	cVector2& operator*=(const float &mult);//Surcharge d'op�rateur d'affectation multiplicative avec un scalaire

	friend std::ostream& operator<<(std::ostream &stream, cVector2 const &vect);//Surcharge d'op�rateur d'extraction d'un cVector3
	friend cVector2 operator+(const cVector2 &vector, const cVector3 &otherVect);//Surcharge d'op�rateur d'addition d'un cVector2 avec un cVector3. Retourne un cVector2
	friend cVector3 operator+(const cVector3 &vector, const cVector2 &otherVect);//Surcharge d'op�rateur d'addition d'un cVector3 avec un cVector2. Retourne un cVector3
protected:
private:
	float m_axis[2];
};