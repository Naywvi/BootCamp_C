#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
Permet de diviser deux int > float

int number = 10;
float lim = static_cast<float>(number) / 2.0f;
*/
int pyramide(int number){
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int max = number/2;
    int pair = (number%2 == 0) ? 1 : 0;

    for (int i = 0; i < number; i++){
        for (int j = 0; j < number; j++){
            if(i >= max){

            //     // if(pair)
            //     // else  

            

            }else{
                if(i == 0){
                    if(a == number-1){
                        printf("v");
                        a = 0;
                        b++;
                    }else printf(">");
                    a++;
                }else{
                    if(a == number-1){
                        printf("v");
                        a = 0;
                        b++;
                    }else if(b == number-1){
                        printf("<");
                        b = 0;
                        a++;
                    }else{
                        printf(" ");
                        a++;
                    }
                }
                
            }
        }
        printf("\n");
    }
}

int main() {
    int number = 0;
    scanf("%d", &number);
    pyramide(number);
    return 0;
}