/******************************************************************************
                            TD Informatique
							 Aloïs GAUCHER
*******************************************************************************/

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

char chaine[50],chaine2[50];
int compteur = 0,caractere,longueur,i;

void renversement(char chaine[]) {
	longueur = strlen(chaine);
		for (i = 0; i < longueur; i++) {
			longueur = strlen(chaine);
			chaine2[i] = chaine[longueur-i-1];
			chaine2[longueur] = 0;
}
}

//Main
int main() {
	printf("Veuillez taper une chaîne de caractères: ");
	scanf("%s",chaine);
	printf("Votre chaîne de caractères est: %s \n",chaine);
	renversementx(chaine);
	printf("La chaîne de caractères renversée est: %s \n",chaine2);
}