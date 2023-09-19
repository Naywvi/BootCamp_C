#include <stdio.h>
#include <string.h>

int main() {
    int height = 0;
    scanf("%d", &height);
    for (int i = 1; i <= height; i++){
        for (int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}