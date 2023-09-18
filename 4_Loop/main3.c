#include <stdio.h>

int main() {
    int count;
    for (int i = 0; i <= 99; i++)
    {
        if(i%2==0 && count == 0){
            count++;
            printf("%d\n",i );
        }else count = 0;
    }
return 0;
}

