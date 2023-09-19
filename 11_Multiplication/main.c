#include <stdio.h>

int main() {
    int multiple, number = 0;
    scanf("%d", &multiple);
    scanf("%d", &number);
    for (int i = 1; i <= number; i++){
        if(i % multiple == 0) printf("%d\n", i);
    }
    return 0;
}