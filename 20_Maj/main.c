#include <stdio.h>  
#include <stdlib.h> 

void majuscule(char *chaine){
	int i = 0;
	while(chaine[i] != '\0'){
		if(chaine[i] >= 'a' && chaine[i] <= 'z'){
			chaine[i] = chaine[i] - 32;
		}
		i++;
	}
	printf("%s", chaine);
}

void minuscule(char *chaine){
	int i = 0;
	while(chaine[i] != '\0'){
		if(chaine[i] >= 'A' && chaine[i] <= 'Z'){
			chaine[i] = chaine[i] + 32;
		}
		i++;
	}
	printf("%s", chaine);
}

int main(){
	char chaine[] = "Bonjour, je suis une chaine de caractere!";
	majuscule(chaine);
	// chaine vaut maintenant "BONJOUR, JE SUIS UNE CHAINE DE CARACTERE!"
	minuscule(chaine);
	// chaine vaut maintenant "bonjour, je suis une chaine de caractere!"
}