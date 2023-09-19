#include <stdio.h>
int sum(int a, int b){
    return a+b;
}
int main() {
    int a, b = 0;
    sprintf("%d", a);
    sprintf("%d", b);
    sum(a, b);
    printf("%d", sum(a, b));
    return 0;
}