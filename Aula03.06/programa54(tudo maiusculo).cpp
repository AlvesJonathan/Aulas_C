#include <stdio.h>
#include<stdlib.h>
#include<string.h>
# define MAX 50

int main()

{
	char nome[MAX];
	int tam, i;
	printf ("Digite seu nome:");
	gets (nome);
	tam=strlen(nome);
	
	for(i=0;i<tam;i++)
	{
			if(nome[i+1]>=97&&nome[i+1]<=122)
			{
				nome[i+1]=nome[i+1]-32;
			}
	}
	
	for(i=0;i<tam;i++)
	{
		if(nome[i]>=97 && nome[i]<=122)
		{
			nome[0]=nome[0]-32;
		}
	}
		
	puts(nome);
	system("PAUSE");
	return 0;
}
