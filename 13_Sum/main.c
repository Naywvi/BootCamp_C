#include <stdio.h>
#include <string.h>

int sum(int a, int b){
    return a+b;
}
int main() {
    int a = 0;
    int b = 0;  
    scanf("%d", &a);
    scanf("%d", &b);
    sum(a, b);
    printf("%d", sum(a, b));
    return 0;
}