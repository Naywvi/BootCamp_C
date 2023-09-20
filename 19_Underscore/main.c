#include <stdio.h>  
#include <stdlib.h> 

void underscore(char *chaine){
	int i = 0;
	while(chaine[i] != '\0'){
		if(chaine[i] == ' '){
			chaine[i] = '_';
		}
		i++;
	}
	printf("%s", chaine);
}

int main(){
	char chaine[] = "Bonjour, je suis une chaine de caractere!";
	underscore(chaine);
}