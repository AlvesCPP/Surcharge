#pragma once

#include <math.h>
#include <iostream>
#include <string>

class cVector2;
class cVector3
{
public:
	//Constructeurs
	cVector3();//Constructeur sans paramètre
	cVector3(cVector3* ptrVect);//Constructeur avec paramètre obligatoire (copie d'un pointeur de vecteur)
	cVector3(float x = 0.0, float y = 0.0, float z = 0.0);//Constructeur avec paramètres par défaut
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
	//Opérations
	void Mult(float factor);//Multiplication par le produit scalaire.
	//Conversion
	std::string ToString()const;//Conversion des champs de ce vecteur en string.
	//Surcharge
	bool operator==(const cVector3 &otherVect) const;//Surcharge d'opérateur d'égalité avec un autre cVector3
	bool operator!=(const cVector3 &otherVect) const;//Surcharge d'opérateur d'inégalité avec un autre cVector3
	cVector3 operator+(const cVector3 &otherVect) const;//Surcharge d'opérateur d'addition avec un autre cVector3
	cVector3 operator-(const cVector3 &otherVect) const;//Surcharge d'opérateur de soustraction avec un autre cVector3
	cVector3 operator*(const float &mult) const;//Surcharge d'opérateur de multiplication avec un scalaire
	cVector3& operator+=(const cVector3 &otherVect);//Surcharge d'opérateur d'affectation additive avec un autre cVector3
	cVector3& operator-=(const cVector3 &otherVect);//Surcharge d'opérateur d'affection soustractive avec un autre cVector3
	cVector3& operator*=(const float &mult);//Surcharge d'opérateur d'affectation multiplicative avec un scalaire

	friend std::ostream& operator<<(std::ostream &stream, cVector3 const &vect);//Surcharge d'opérateur d'extraction d'un cVector3
	friend cVector2 operator+(const cVector2 &vector, const cVector3 &otherVect);//Surcharge d'opérateur d'addition d'un cVector2 avec un cVector3. Retourne un cVector2
	friend cVector3 operator+(const cVector3 &vector, const cVector2 &otherVect);//Surcharge d'opérateur d'addition d'un cVector3 avec un cVector2. Retourne un cVector3
protected:
private:
	float m_axis[3];//Tableau des axes x y z
};