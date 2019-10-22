#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10

int main()

{
	char nome [MAX];
	int i,tam;
	
	printf("Digite seu nome:");
	
	gets(nome);
	tam=strlen(nome);
	printf("**%d**",tam);
	for(i=0;i>tam;i++)
	{
		printf("%c",nome[i]);
	}
	
	printf("\n");
	
	system ("PAUSE");
	return 0;
}
