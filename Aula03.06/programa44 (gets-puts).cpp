#include <stdio.h>
#include<stdlib.h>
#define MAX 20

int main()

{
	char nome [MAX];//vetor de caracteres
	
	printf("Digite seu nome:");
	gets(nome);
	
	puts(nome);
	
	system ("PAUSE");
	return 0;
}
