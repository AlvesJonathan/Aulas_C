#include <stdio.h>
#include<stdlib.h>
#include<string.h>
# define MAX 50

int main()

{
	char nome[MAX];
	printf ("Digite seu nome:");
	gets (nome);
	
	nome[0]=nome[0]-32;
	
	puts(nome);
	system("PAUSE");
	return 0;
}
