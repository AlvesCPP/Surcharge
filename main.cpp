#include <iostream>
#include <Windows.h>
#include "cVector2.h"
#include "cVector3.h"

int main() {
	cVector2 vectorA(10, 10), vectorB(0, 0);
	cVector3 vectorC(1, 1, 1);

	SetConsoleOutputCP(CP_UTF7);//Assignation de l'encodage de la console (Affichage des accents)

	//Utilisation de l'opérateur d'extraction surchargé d'un cVector2
	std::cout << "Vecteur 2D A : " << vectorA << std::endl;

	//Utilisation de l'opérateur d'assignation surchargé additive d'un cVector2
	std::cout << "Vecteur 2D B additionné à un Vecteur 2D (20,20) : " << (vectorB += cVector2(20, 20)) << std::endl;


	//Utilisation de l'opérateur d'assignation multiplicative surchargé d'un cVector2 par un scalaire
	std::cout << "Vecteur 2D A multiplié par 2 : " << (vectorA *= 2) << std::endl;

	//Utilisation de l'opérateur de soustraction surchargé d'un cVector2
	std::cout << "Vecteur 2D B soustrait au Vecteur 2D A : " << (vectorA - vectorB) << std::endl;


	//Utilisation de l'opérateur d'extraction surchargé d'un cVector3
	std::cout << "Vecteur 3D C : " << vectorC << std::endl;

	/*
		Utilisation de l'opérateur d'addition surchargé d'un cVector2 avec un cVector3
		
		Retourne un cVector2 car le premier paramètre est un cVector2.
	*/
	std::cout << "Vecteur 3D C additionné au Vecteur 2D A : " << (vectorA + vectorC) << ". Vecteur 2D retourné." << std::endl;
	
	/*
		Utilisation de l'opérateur d'addition surchargé d'un cVector3 avec un cVector2

		Retourne un cVector3 car le premier paramètre est un cVector3.
	*/
	std::cout << "Vecteur 2D A additionné au Vecteur 3D C : " << (vectorC + vectorA) << ". Vecteur 3D retourné." << std::endl;

	system("pause");

	return 0;
}