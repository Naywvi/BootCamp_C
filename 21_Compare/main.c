#include <stdio.h>  
#include <stdlib.h> 

void deletePair(int *tableau){
	int i = 0;
	while(tableau[i] != '\0'){
		if(i % 2 == 0){
			tableau[i] = 0;
		}
		i++;
	}
}

void compacteur(int *tableau){
	int i = 0;
	int j = 0;
	while(tableau[i] != '\0'){
		if(tableau[i] != 0){
			tableau[j] = tableau[i];
			j++;
		}
		i++;
	}
	while(j < i){
		tableau[j] = 0;
		j++;
	}
}

int main(){
	int tableau[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	// On supprime les éléments d'index pairs
	deletePair(tableau);
	// Le tableau vaut maintenant {1, 0, 3, 0, 5, 0, 7, 0, 9}
	// On décale les éléments non vides vers la gauche
	compacteur(tableau);
	// Le tableau vaut maintenant {1, 3, 5, 7, 9, 0, 0, 0, 0}ne vaut maintenant "bonjour, je suis une chaine de caractere!"
}