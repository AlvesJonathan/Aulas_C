#include <stdio.h>
#include<stdlib.h>
#define MAX 10

int main()

{
	char nome [MAX];
	int i;
	
	printf("Digite seu nome:");
	
	gets(nome);
	for(i=7;i>=0;i--)
	{
		printf("%c",nome[i]);
	}
	
	printf("\n");
	
	system ("PAUSE");
	return 0;
}
