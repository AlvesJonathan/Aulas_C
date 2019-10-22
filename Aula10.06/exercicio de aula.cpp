#include<stdio.h>
#include<stdlib.h>
#define LINHA 10
#define COLUNA 10

//  1 0 0
//  0 1 0
//  0 0 1


int main()
{
	int mat[LINHA][COLUNA];
	int i, j;
	int numero=1;
	
	for(i=0;i<LINHA;i++)
	{
		for(j=0;j<COLUNA;j++)
		{
		 	if(i==j)
		 	{
		 		mat [i] [j]=1;
		 	}
		 
		 	else
		 	{
		 		mat [i] [j]=0;
		 	}
		 
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
