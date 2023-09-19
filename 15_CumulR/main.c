#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cumul(int a){
    if(a > 0){
        printf("%d\n",a);
        cumul(a-1);
    }
    else return 0;
}
int main() {
    cumul(5);
    return 0;
}