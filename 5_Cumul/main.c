#include <stdio.h>

int main() {
    int count;
    printf("Entrez un nombre compris entre 0 et 255 ");
    scanf("%d", &count);
    for (int i = 0; i <= count; i++)
    {
        printf("%d\n",i );
    }
return 0;
}
