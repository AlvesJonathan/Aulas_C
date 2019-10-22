#include <stdio.h>
#include<stdlib.h>
#define MAX 5

int main()

{
	char nome [MAX];//vetor de caracteres
	
	printf("Digite seu nome:");
	scanf("%s",nome);
	
	printf("%s\n",nome);
	
	system ("PAUSE");
	return 0;
}
