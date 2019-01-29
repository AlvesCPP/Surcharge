#include "cVector2.h"
#include "cVector3.h"

/*
BUT:	Surcharger l'op�rateur d'addition d'un cVector2 avec un cVector3.
		Le premier terme de l'addition d�termine le type de sortie : cVector2.
ENTREES: cVector2 terme � additionner, cVector3 terme � additionner
SORTIES: cVector2 r�sultat de l'op�ration
*/
cVector2 operator+(const cVector2 &vector, const cVector3 &otherVect) {
	return cVector2(vector.m_axis[0] + otherVect.m_axis[0], vector.m_axis[1] + otherVect.m_axis[1]);
}

/*
BUT:	Surcharger l'op�rateur d'addition d'un cVector3 avec un cVector2.
		Le premier terme de l'addition d�termine le type de sortie : cVector3.
ENTREES: cVector3 terme � additionner, cVector2 terme � additionner
SORTIES: cVector3 r�sultat de l'op�ration
*/
cVector3 operator+(const cVector3 &vector, const cVector2 &otherVect) {
	return cVector3(vector.m_axis[0] + otherVect.m_axis[0], vector.m_axis[1] + otherVect.m_axis[1], vector.m_axis[2]);
}