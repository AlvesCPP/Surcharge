#include "cVector3.h"


//CONSTRUCTEURS

/*
BUT: Constructeur sans paramètre, assigne les champs à 0.0
ENTREES: /
SORTIES: Initialisation des champs m_axis[0], m_axis[1] et m_axis[2]
*/
cVector3::cVector3()
{
	m_axis[0] = 0.0;
	m_axis[1] = 0.0;
	m_axis[2] = 0.0;
}

/*
BUT: Constructeur avec paramètre obligatoire, pointeur de cVector3
ENTREES: pointeur de cVector3
SORTIES: Initialisation des champs m_axis[0], m_axis[1] et m_axis[2]
*/
cVector3::cVector3(cVector3* ptrVect)
{
	if (ptrVect != NULL)
	{
		m_axis[0] = ptrVect->m_axis[0];
		m_axis[1] = ptrVect->m_axis[1];
		m_axis[2] = ptrVect->m_axis[2];
	}
}

/*
BUT: Constructeur avec un paramètre obligatoire et un paramètre par défaut.
ENTREES: 3 floats
SORTIES: Initialisation des champs m_axis[0], m_axis[1] et m_axis[2]
*/
cVector3::cVector3(float x, float y, float z)
{
	m_axis[0] = x;
	m_axis[1] = y;
	m_axis[2] = z;
}

//ACCESSEURS

/*
BUT: Accesseur du champ m_axis[0]
ENTREES: /
SORTIES: m_axis[0]
*/
float cVector3::GetX() const
{
	return m_axis[0];
}

/*
BUT: Accesseur du champ m_axis[1]
ENTREES: /
SORTIES: m_axis[1]
*/
float cVector3::GetY() const
{
	return m_axis[1];
}

/*
BUT: Accesseur du champ m_axis[2]
ENTREES: /
SORTIES: m_axis[2]
*/
float cVector3::GetZ() const
{
	return m_axis[2];

}
//MUTATEURS

/*
BUT: Mutateur des champs m_axis[0] et m_axis[1]
ENTREES: 2 floats x et y
SORTIES: Modification des champs m_axis[0] et m_axis[1]
*/
void cVector3::SetXY(float x, float y)
{
	m_axis[0] = x;
	m_axis[1] = y;
}

/*
BUT: Mutateur des champs m_axis[0], m_axis[1] et m_axis[2]
ENTREES: 2 floats x et y
SORTIES: Modification des champs m_axis[0], m_axis[1] et m_axis[2]
*/
void cVector3::SetXYZ(float x, float y, float z)
{
	m_axis[0] = x;
	m_axis[1] = y;
	m_axis[2] = z;
}

/*
BUT: Mutateur du champ m_axis[0]
ENTREES: 1 float x
SORTIES: Modification du champ m_axis[0]
*/
void cVector3::SetX(float x)
{
	m_axis[0] = x;
}

/*
BUT: Mutateur du champ m_axis[1]
ENTREES: 1 float y
SORTIES: Modification du champ m_axis[1]
*/
void cVector3::SetY(float y)
{
	m_axis[1] = y;
}

/*
BUT: Mutateur du champ m_axis[2]
ENTREES: 1 float z
SORTIES: Modification du champ m_axis[2]
*/
void cVector3::SetZ(float z)
{
	m_axis[2] = z;
}

//OPERATIONS

/*
BUT: Multiplication par un scalaire
ENTREES: 1 float
SORTIES: Modification des champs m_axis[0], m_axis[1] et m_axis[2]
*/
void cVector3::Mult(float factor)
{
	m_axis[0] *= factor;
	m_axis[1] *= factor;
	m_axis[2] *= factor;
}

//CONVERSIONS

/*
BUT: Retourne la conversion en chaine de caractères des champs du vecteur
ENTREES: /
SORTIES: string
*/
std::string cVector3::ToString()const
{
	return ("x = " + std::to_string(m_axis[0]) + " y = " + std::to_string(m_axis[1]) + " z = " + std::to_string(m_axis[2]));
}

//SURCHARGE

/*
BUT: Surcharger l'opérateur d'égalité avec un autre cVector3
ENTREES: cVector3 à comparer
SORTIES: booléen résultat du test
*/
bool cVector3::operator==(const cVector3 & otherVect) const
{
	return (m_axis[0] == otherVect.m_axis[0] &&
		m_axis[1] == otherVect.m_axis[1] &&
		m_axis[2] == otherVect.m_axis[2]);
}

/*
BUT: Surcharger l'opérateur d'inégalité avec un autre cVector3
ENTREES: cVector3 à comparer
SORTIES: booléen résultat du test
*/
bool cVector3::operator!=(const cVector3 & otherVect) const
{
	return !(*this == otherVect);//Utilisation de la surcharge d'opérateur d'égalité
}

/*
BUT: Surcharger l'opérateur d'addition avec un autre cVector3
ENTREES: cVector3 à additionner
SORTIES: cVector3 résultat de l'opération
*/
cVector3 cVector3::operator+(const cVector3 & otherVect) const
{
	return cVector3(m_axis[0] + otherVect.m_axis[0],
					m_axis[1] + otherVect.m_axis[1],
					m_axis[2] + otherVect.m_axis[2]);
}

/*
BUT: Surcharger l'opérateur de soustraction avec un autre cVector3
ENTREES: cVector3 à soustraire
SORTIES: cVector3 résultat de l'opération
*/
cVector3 cVector3::operator-(const cVector3 & otherVect) const
{
	return cVector3(m_axis[0] - otherVect.m_axis[0],
					m_axis[1] - otherVect.m_axis[1],
					m_axis[2] - otherVect.m_axis[2]);
}

/*
BUT: Surcharger l'opérateur de multiplication avec un scalaire
ENTREES: float multiplicateur
SORTIES: cVector3 résultat de l'opération
*/
cVector3 cVector3::operator*(const float & mult) const
{
	return cVector3(m_axis[0] * mult, m_axis[1] * mult, m_axis[2] * mult);
}

/*
BUT: Surcharger l'opérateur d'assignation additive avec un autre cVector3
ENTREES: cVector3 à additionner
SORTIES: cVector3 résultat de l'opération
*/
cVector3& cVector3::operator+=(const cVector3 & otherVect)
{
	return *(new cVector3(*this + otherVect));//Utilisation de la surcharge d'opérateur d'addition
}

/*
BUT: Surcharger l'opérateur d'assignation soustractive avec un autre cVector3
ENTREES: cVector3 à soustraire
SORTIES: cVector3 résultat de l'opération
*/
cVector3& cVector3::operator-=(const cVector3 & otherVect)
{
	return *(new cVector3(*this - otherVect));
}

/*
BUT: Surcharger l'opérateur d'assignation multiplicative avec un scalaire
ENTREES: float multiplicateur
SORTIES: cVector3 résultat de l'opération
*/
cVector3 & cVector3::operator*=(const float & mult)
{
	return (*(new cVector3(*this * mult)));
}

/*
BUT: Surcharger l'opérateur d'extraction d'un cVector3
ENTREES: ostream flux de sortie, cVector3 à extraire
SORTIES: Transmission du cVector3 au flux, retourne la référence du flux modifié
*/
std::ostream & operator<<(std::ostream & stream, cVector3 const & vect)
{
	stream << "Vector3 (" << vect.ToString() << ")";

	return stream;
}
