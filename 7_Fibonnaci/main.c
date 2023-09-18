#include <stdio.h>

int fibonnaci(int n){
    if(n < 0)return -1;
    if(n == 0)return 0;
    if(n == 1)return 1;
    return fibonnaci(n-1) + fibonnaci(n-2);
}

int main() {
    printf("Result : %d", fibonnaci(10));
    return 0;
}