#include<stdlib.h>
#include<stdio.h>
void preencheMatriz(int mA[5][5]);
void numeroPesquisado(int mA[5][5]);
void imprimeMatriz (int mA[5][5]);
int main(){
	int mA[5][5];
	
	preencheMatriz(mA);
	imprimeMatriz(mA);
	numeroPesquisado(mA);	
	
}

void preencheMatriz(int mA[5][5]){
	int i, j;
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			mA[i][j] = rand()%10;
		}
	}
}


void numeroPesquisado(int mA[5][5]){
	int i,j,x, cont=0, opcao;
	do{
	printf("\n");
	printf("\tDigite o numero que deseja encontrar\n");
	scanf("%d", &x);
	printf("\n");
	printf("\tPosicao dentro da Matriz [L][C]\n");
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			if (x==mA[i][j]){
								
				printf("[%d][%d]\t\n", i, j);
			}else cont++;			
		}	
	}
	if (cont == 25)
		printf("\tNao encontrado!\n");
	printf("\tDeseja pesquisar outro numero? 1 - sim, 0 - nao \n");
	scanf("%d", &opcao);
	} while (opcao == 1);
}
void imprimeMatriz (int mA[5][5]){
	int i,j;
	printf("\tMatriz para conferencia.\n");
	printf("\n");
		for( i=0; i<5;i++){
			for(j=0;j<5;j++){
				printf("%d\t", mA[i][j]);
			}
			printf("\n");
		}		
}


	
	

	
