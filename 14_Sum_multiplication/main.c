#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sum(int a, int b){
    for (int i = 0; i < b; i++)
    {
        if(a % 2 == 0) {
            printf("1\n");
            return 0;
        }
    }
    printf("0\n");
    return 0;
}
int main() {
    int a = 0;
    int b = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    sum(a, b);
    return 0;
}