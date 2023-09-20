#include <stdio.h>  
#include <stdlib.h> 


int main(){
	int tableau1[2][2] = {{1, 2}, {3, 4}};
	int tableau2[2][2];
    memcpy(tableau2, tableau1, sizeof(tableau1));

	int tableau3[2][2];
	memcpy(tableau3, tableau1, sizeof(tableau1));
	
}