#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

int main()
{
	char nome[MAX];
	int tam,i;
	printf("Digite seu nome:");
	gets(nome);
	tam=strlen(nome);
	
	for(i=0;i<tam;i++)
	{
		if(nome[i]==32)
		{
			if (nome[i+1]==100&&nome[i+2]==97&&nome[i+3]==32||//da
			   nome[i+1]==100&&nome[i+2]==101&&nome[i+3]==32||//de
			   nome[i+1]==100&&nome[i+2]==111&&nome[i+3]==115&&nome[i+4]==32||//dos
			   nome[i+1]==100&&nome[i+2]==97&&nome[i+3]==115&&nome[i+4]==32||//das
			   nome[i+1]==101&&nome[i+2]==32)//e
			   
			{
				nome[i+1]=nome[i+1];
			}
			
			else if(nome[i+1]>=97&&nome[i+1]<=122)
			{
				nome[i+1]=nome[i+1]-32;
			}
		}
	}
	
	
	if(nome[0]>=97&&nome[0]<=122)
	{
		nome[0]=nome[0]-32;
	}
	puts(nome);
	system("PAUSE");
	return 0;	
}
