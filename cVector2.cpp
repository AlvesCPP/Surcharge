#include "cVector2.h"


//CONSTRUCTEURS

/*
BUT: Constructeur sans param�tre, assigne les champs � 0.0
ENTREES: /
SORTIES: Initialisation des champs m_axis[0] et m_axis[1]
*/
cVector2::cVector2()
{
	m_axis[0] = 0.0;
	m_axis[1] = 0.0;
}

/*
BUT: Constructeur avec param�tre obligatoire, pointeur de cVector2
ENTREES: pointeur de cVector2
SORTIES: Initialisation des champs m_axis[0] et m_axis[1]
*/
cVector2::cVector2(cVector2* ptrVect)
{
	if (ptrVect != NULL)
	{
		m_axis[0] = ptrVect->m_axis[0];
		m_axis[1] = ptrVect->m_axis[1];
	}
}

/*
BUT: Constructeur avec un param�tre obligatoire et un param�tre par d�faut.
ENTREES: 2 floats
SORTIES: Initialisation des champs m_axis[0] et m_axis[1]
*/
cVector2::cVector2(float x, float y)
{
	m_axis[0] = x;
	m_axis[1] = y;
}

//ACCESSEURS

/*
BUT: Accesseur du champ m_axis[0]
ENTREES: /
SORTIES: m_axis[0]
*/
float cVector2::GetX() const
{
	return m_axis[0];
}

/*
BUT: Accesseur du champ m_axis[1]
ENTREES: /
SORTIES: m_axis[1]
*/
float cVector2::GetY() const
{
	return m_axis[1];
}

//MUTATEURS

/*
BUT: Mutateur des champs m_axis[0] et m_axis[1]
ENTREES: 2 floats x et y
SORTIES: Modification des champs m_axis[0] et m_axis[1]
*/
void cVector2::SetXY(float x, float y)
{
	m_axis[0] = x;
	m_axis[1] = y;
}

/*
BUT: Mutateur du champ m_axis[0]
ENTREES: 1 float x
SORTIES: Modification du champ m_axis[0]
*/
void cVector2::SetX(float x)
{
	m_axis[0] = x;
}

/*
BUT: Mutateur du champ m_axis[1]
ENTREES: 1 float y
SORTIES: Modification du champ m_axis[1]
*/
void cVector2::SetY(float y)
{
	m_axis[1] = y;
}

//OPERATIONS

/*
BUT: Multiplication par un scalaire
ENTREES: 1 float
SORTIES: Modification des champs m_axis[0] et m_axis[1]
*/
void cVector2::Mult(float factor)
{
	m_axis[0] *= factor;
	m_axis[1] *= factor;
}

//CONVERSIONS

/*
BUT: Retourne la conversion en chaine de caract�res des champs du vecteur
ENTREES: /
SORTIES: string
*/
std::string cVector2::ToString()const
{
	return ("x = " + std::to_string(m_axis[0]) + " y = " + std::to_string(m_axis[1]));
}

//SURCHARGE

/*
BUT: Surcharger l'op�rateur d'�galit� avec un autre cVector2
ENTREES: cVector2 � comparer
SORTIES: bool�en r�sultat du test
*/
bool cVector2::operator==(const cVector2 & otherVect) const
{
	return (m_axis[0] == otherVect.m_axis[0] &&
			m_axis[1] == otherVect.m_axis[1]);
}

/*
BUT: Surcharger l'op�rateur d'in�galit� avec un autre cVector2
ENTREES: cVector2 � comparer
SORTIES: bool�en r�sultat du test
*/
bool cVector2::operator!=(const cVector2 & otherVect) const
{
	return !(*this == otherVect);//Utilisation de la surcharge d'op�rateur d'�galit�
}

/*
BUT: Surcharger l'op�rateur d'addition avec un autre cVector2
ENTREES: cVector2 � additionner
SORTIES: cVector2 r�sultat de l'op�ration
*/
cVector2 cVector2::operator+(const cVector2 & otherVect) const
{
	return cVector2(m_axis[0] + otherVect.m_axis[0],
					m_axis[1] + otherVect.m_axis[1]);
}

/*
BUT: Surcharger l'op�rateur de soustraction avec un autre cVector2
ENTREES: cVector2 � soustraire
SORTIES: cVector2 r�sultat de l'op�ration
*/
cVector2 cVector2::operator-(const cVector2 & otherVect) const
{
	return cVector2(m_axis[0] - otherVect.m_axis[0],
					m_axis[1] - otherVect.m_axis[1]);
}

/*
BUT: Surcharger l'op�rateur de multiplication avec un scalaire
ENTREES: float multiplicateur
SORTIES: cVector2 r�sultat de l'op�ration
*/
cVector2 cVector2::operator*(const float & mult) const
{
	return cVector2(m_axis[0] * mult, m_axis[1] * mult);
}

/*
BUT: Surcharger l'op�rateur d'assignation additive avec un autre cVector2
ENTREES: cVector2 � additionner
SORTIES: cVector2 r�sultat de l'op�ration
*/
cVector2& cVector2::operator+=(const cVector2 & otherVect)
{
	return *(new cVector2(*this + otherVect));
}

/*
BUT: Surcharger l'op�rateur d'assignation soustractive avec un autre cVector2
ENTREES: cVector2 � soustraire
SORTIES: cVector2 r�sultat de l'op�ration
*/
cVector2& cVector2::operator-=(const cVector2 & otherVect)
{
	return *(new cVector2(*this - otherVect));//Utilisation de la surcharge d'op�rateur d'addition
}

/*
BUT: Surcharger l'op�rateur d'assignation multiplicative avec un scalaire
ENTREES: float multiplicateur
SORTIES: cVector2 r�sultat de l'op�ration
*/
cVector2 & cVector2::operator*=(const float & mult)
{
	return (*(new cVector2(*this * mult)));
}

/*
BUT: Surcharger l'op�rateur d'extraction d'un cVector2
ENTREES: ostream flux de sortie, cVector2 � extraire
SORTIES: Transmission du cVector2 au flux, retourne la r�f�rence du flux modifi�
*/
std::ostream & operator<<(std::ostream & stream, cVector2 const & vect)
{
	stream << "Vector2 (" << vect.ToString() << ")";

	return stream;
}
