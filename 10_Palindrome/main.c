#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *reverse(char s[]){
    int lim = strlen(s) - 1;
    char *sreverse = malloc(sizeof(char)*lim+1);
    int limTemp = lim;
    for (unsigned i = 0; i <= lim ; i++){   
        sreverse[i] = s[limTemp];
        limTemp--;
        if(limTemp < 0) return sreverse;
    }
    return 0;
}

int main() {
    int palin = 0;
    char snum[10];
    scanf("%d", &palin);
    sprintf(snum, "%d", palin);
    if(strcmp(snum, reverse(snum)) == 0) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}
