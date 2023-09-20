#include <stdio.h>  
#include <stdlib.h> 

void stack_push(int *tableau, int value, int tableau_size){
	int i = 0;
	while(tableau[i] != 0){
		i++;
	}
	if(i < tableau_size){
		tableau[i] = value;
	}
}

void stack_pop(int *tableau, int tableau_size){
	int i = 0;
	while(tableau[i] != 0){
		i++;
	}
	if(i > 0){
		tableau[i-1] = 0;
	}
}

int main(){
	int tableau[10] = {0, 0, 0, 4, 5, 6, 7, 8, 9};
	int tableau_size = 10;
	// On ajoute 10
	stack_push(tableau, 10, tableau_size);
	// Le tableau vaut maintenant {0, 0, 4, 5, 6, 7, 8, 9, 10}
	// On retire la dernière valeur ajoutée
	stack_pop(tableau, tableau_size); // renvoie 10
	// Le tableau vaut maintenant {0, 0, 0, 4, 5, 6, 7, 8, 9}
}