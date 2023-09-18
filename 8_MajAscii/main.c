#include <stdio.h>

char CapsTiny(char n){
    if(n >= 'A' && n <= 'Z') {
        return n + 32;
    }
    else if(n >= 'a' && n <= 'z') {
        return n - 32;
    }
    else return n;
    
}

int main() {
    char letter;
    printf("Entrez une lettre: ");
    scanf(" %c", &letter); 
    if((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z')) {
        printf("Result : %c\n", CapsTiny(letter));
    }
    else printf("Caractère non valide\n");
    
    return 0;
}
