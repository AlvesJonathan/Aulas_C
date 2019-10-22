#include<stdio.h>
#include<stdlib.h>
#define LINHA 3
#define COLUNA 3

int main()
{
	int mat[LINHA][COLUNA];
	int i, j;
	int numero=1;
	
	for(i=LINHA-1;i>=0;i--)
	{
		for(j=COLUNA-1;j>=0;j--)
		{
			mat[i] [j]=numero;
			numero++;
		}
	}
	
	for(i=0;i<LINHA;i++)
	{
		for(j=0;j<COLUNA;j++)
		{
			printf("%d ", mat[i] [j]);
			
		}
		
		printf("\n\n");
		
	}
		
	system ("PAUSE");
	return 0;
	
}
