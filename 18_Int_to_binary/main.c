#include <stdio.h>  
#include <stdlib.h> 

int main(){
	int tab[10], nbr, i;  
	printf("Number : ");  
	scanf("%d",&nbr);  
	for(i=0; nbr > 0; i++){  
		tab[i] = nbr%2;  
		nbr = nbr/2;  
	} 
	printf("\nBinary = ");
	for(i=i-1; i >= 0; i--)  {  
		printf("%d",tab[i]);  
	}  
	return 0;
}