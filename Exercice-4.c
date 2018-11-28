/******************************************************************************
                            TD Informatique
							 Aloïs GAUCHER
*******************************************************************************/

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

char chaine[50];
int compteur = 0,caractere,i;

//Passage en majuscule
void majuscule(char chaine[]) {
	int longueur = strlen(chaine);
	for (i = 0; i < longueur; i++) {
		if ((96 < chaine[i]) && (chaine[i] < 123))
		chaine[i]=chaine[i]-32;
	}
}

//Main
int main() {
	printf("Veuillez taper une chaîne de caractères: ");
	gets(chaine);
	printf("Votre chaîne de caractères est: %s \n",chaine);
	majuscule(chaine);
	printf("La chaîne de caractères en majuscules est: %s \n",chaine);
	return(0);
}