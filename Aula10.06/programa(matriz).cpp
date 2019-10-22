#include<stdio.h>
#include<stdlib.h>
#define LINHA 3
#define COLUNA 3

int main()
{
	int mat[LINHA][COLUNA];
	int i, j;
	int numero=1;
	
	for(i=0;i<LINHA;i++)
	{
		for(j=0;j<COLUNA;j++)
		{
			mat[i] [j]=numero;
			numero++;
		}
	}
	
	
	system ("PAUSE");
	return 0;
	
}
