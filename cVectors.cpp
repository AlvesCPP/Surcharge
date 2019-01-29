#include "cVector2.h"
#include "cVector3.h"

/*
BUT:	Surcharger l'opérateur d'addition d'un cVector2 avec un cVector3.
		Le premier terme de l'addition détermine le type de sortie : cVector2.
ENTREES: cVector2 terme à additionner, cVector3 terme à additionner
SORTIES: cVector2 résultat de l'opération
*/
cVector2 operator+(const cVector2 &vector, const cVector3 &otherVect) {
	return cVector2(vector.m_axis[0] + otherVect.m_axis[0], vector.m_axis[1] + otherVect.m_axis[1]);
}

/*
BUT:	Surcharger l'opérateur d'addition d'un cVector3 avec un cVector2.
		Le premier terme de l'addition détermine le type de sortie : cVector3.
ENTREES: cVector3 terme à additionner, cVector2 terme à additionner
SORTIES: cVector3 résultat de l'opération
*/
cVector3 operator+(const cVector3 &vector, const cVector2 &otherVect) {
	return cVector3(vector.m_axis[0] + otherVect.m_axis[0], vector.m_axis[1] + otherVect.m_axis[1], vector.m_axis[2]);
}