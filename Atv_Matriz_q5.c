#include<stdlib.h>
#include<stdio.h>

int main(){

    int mA[5][5][5],i,j,k;
    
    for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			for (k=0; k<5; k++){
				mA[i][j][k] = rand()%100;
    		}
		}
	}
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			for (k=0; k<5; k++){
				printf("[%d] \t",mA[i][j][k]);	
    		} 
		printf("\n"); 		
		}
	printf("\n");
	}

	
}
	
	
	

