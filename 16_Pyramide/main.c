#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int pyramide(int number){
    if(number%2 == 0)return 0;
    int space = number/2;
    int index = space-1;
    int sp = space;
    for (int i = 0; i <= sp; i++){
        if(space !=0){
            for (int j = 0; j < space; j++){
                printf(" ");
            }
            space--;
        }
        
        for (int k = 0; k <= i*2; k++){
            printf("*");
        }

        number -=2;
      printf("\n");
    }
    
    return 0;
}

int main() {
    int number = 0;
    scanf("%d",&number);
    if(!pyramide(number))printf("Need Pair Number");
    return 0;
}