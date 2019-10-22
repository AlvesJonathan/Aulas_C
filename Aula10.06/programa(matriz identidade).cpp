#include<stdio.h>
#include<stdlib.h>
#define LINHA 10
#define COLUNA 10

//  1 0 0
//  0 1 0
//  0 0 1


int main()
{
	int mat[LINHA] [COLUNA];
	int linha=9, coluna=8;
	
	while(linha!=coluna)
	{
	
		printf("Qual a quantidade de linha?");
		scanf("%d",&linha);
	
		printf("\nQual a quantidade de coluna?");
		scanf("%d",&coluna);
	
		if(linha!=coluna)
		{
			printf("\nMatriz nao quadrada!!\nFavor digitar novamente\n\n");
		}
    }
    
    
    
    
    system("PAUSE");
    return 0;
}
