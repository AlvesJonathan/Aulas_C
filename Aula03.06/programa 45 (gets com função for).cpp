#include <stdio.h>
#include<stdlib.h>
#define MAX 20

int main()

{
	char nome [MAX];//vetor de caracteres
	int i;
	
	printf("Digite seu nome:");
	
	gets(nome);
	for(i=0;i<10;i++)
	{
		printf("%c",nome[i]);
	}
	
	printf("\n");
	
	system ("PAUSE");
	return 0;
}
