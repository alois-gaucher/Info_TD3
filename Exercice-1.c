/******************************************************************************
                            TD Informatique
							 Aloïs GAUCHER
*******************************************************************************/

#include <stdio.h>
#include <math.h>

int compteur;
char chaine[50];

//Longueur de la chaîne
int longueurchaine(char chaine[]) {
	while (chaine[compteur] != 0) compteur ++;
	return compteur;
}

int main() {
	printf("Veuillez taper une chaîne de caractères: ");
	scanf("%s",chaine);
	printf("Votre chaîne de caractères est: %s \n",chaine);
	printf("La longueur de la chaîne de caractères est: %d \n",longueurchaine(chaine));
}