#include <stdio.h>
// Un code bien moche :)
int main() {
    int count;
    int count2;

    char snum[5];
    char snum2[5];

    int one = 0;
    int two = 0;
    int three = 0;

    printf("Entrez un nombre compris entre 0 et 255 : ");
    scanf("%d", &count);

    printf("Entrez un second nombre compris entre 0 et 255 : ");
    scanf("%d", &count2);

    if(count == 0 || count2 == 0)return 0;

    sprintf(snum, "%d", count);
    sprintf(snum2, "%d", count2);

    for (int i = 0; i < sizeof(snum) / sizeof(snum[0]); i++) {
        if(snum[i] == '1')one++;
        if(snum[i] == '2')two++;
        if(snum[i] == '3')three++;
    }

    for (int i = 0; i < sizeof(snum2) / sizeof(snum2[0]); i++) {
        if(snum2[i] == '1')one++;
        if(snum2[i] == '2')two++;
        if(snum2[i] == '3')three++;
        printf("%d",one);
    }
    
    printf("La chaîne résultante : %d \n", one);
}
