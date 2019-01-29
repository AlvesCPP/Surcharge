#pragma once

#include <math.h>
#include <iostream>
#include <string>

class cVector2;
class cVector3
{
public:
	//Constructeurs
	cVector3();//Constructeur sans param�tre
	cVector3(cVector3* ptrVect);//Constructeur avec param�tre obligatoire (copie d'un pointeur de vecteur)
	cVector3(float x = 0.0, float y = 0.0, float z = 0.0);//Constructeur avec param�tres par d�faut
	//Accesseurs
	float GetX() const;
	float GetY() const;
	float GetZ() const;
	//Mutateurs
	void SetXYZ(float x, float y, float z);
	void SetXY(float x, float y);
	void SetX(float x);
	void SetY(float y);
	void SetZ(float z);
	//Op�rations
	void Mult(float factor);//Multiplication par le produit scalaire.
	//Conversion
	std::string ToString()const;//Conversion des champs de ce vecteur en string.
	//Surcharge
	bool operator==(const cVector3 &otherVect) const;//Surcharge d'op�rateur d'�galit� avec un autre cVector3
	bool operator!=(const cVector3 &otherVect) const;//Surcharge d'op�rateur d'in�galit� avec un autre cVector3
	cVector3 operator+(const cVector3 &otherVect) const;//Surcharge d'op�rateur d'addition avec un autre cVector3
	cVector3 operator-(const cVector3 &otherVect) const;//Surcharge d'op�rateur de soustraction avec un autre cVector3
	cVector3 operator*(const float &mult) const;//Surcharge d'op�rateur de multiplication avec un scalaire
	cVector3& operator+=(const cVector3 &otherVect);//Surcharge d'op�rateur d'affectation additive avec un autre cVector3
	cVector3& operator-=(const cVector3 &otherVect);//Surcharge d'op�rateur d'affection soustractive avec un autre cVector3
	cVector3& operator*=(const float &mult);//Surcharge d'op�rateur d'affectation multiplicative avec un scalaire

	friend std::ostream& operator<<(std::ostream &stream, cVector3 const &vect);//Surcharge d'op�rateur d'extraction d'un cVector3
	friend cVector2 operator+(const cVector2 &vector, const cVector3 &otherVect);//Surcharge d'op�rateur d'addition d'un cVector2 avec un cVector3. Retourne un cVector2
	friend cVector3 operator+(const cVector3 &vector, const cVector2 &otherVect);//Surcharge d'op�rateur d'addition d'un cVector3 avec un cVector2. Retourne un cVector3
protected:
private:
	float m_axis[3];//Tableau des axes x y z
};