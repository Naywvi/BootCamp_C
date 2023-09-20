#include <stdio.h>  
#include <stdlib.h> 

int chaine_to_ints(char *chaine){
	int i = 0;
	int nombre = 0;
	while(chaine[i] != '\0'){
		nombre = nombre * 10 + (chaine[i] - '0');
		i++;
	}
	return nombre;
}

int main(){
	char chaine[20] = "1234";
	int nombre = chaine_to_ints(chaine);
	// nombre vaut [1, 2, 3, 4]
	ints_to_chaine(nombre, chaine);
	// chaine vaut "1234"
}