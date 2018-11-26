/******************************************************************************
                            TD Informatique
							 Aloïs GAUCHER
*******************************************************************************/

#include <stdio.h>
#include <math.h>

char chaine[50];
int compteur = 0,caractere,i;

//Longueur de la chaîne
int longueurchaine(char chaine[]) {
	while (chaine[compteur] != 0) compteur ++;
	return compteur;
}

//Passage en majuscule
void majuscule(char chaine[]) {
	int longueur = longueurchaine(chaine);
	for (i = 0; i < longueur; i++) {
		chaine[i]=chaine[i]-32;
	};
}

//Main
int main() {
	printf("Veuillez taper une chaîne de caractères: ");
	scanf("%s",chaine);
	printf("Votre chaîne de caractères est: %s \n",chaine);
	majuscule(chaine);
	printf("La chaîne de caractères en majuscules est: %s \n",chaine);
}