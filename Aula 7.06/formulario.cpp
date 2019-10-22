#include<stdlib.h>
#include<stdio.h>
#define MAX 5

struct formulario
{
	char nome[30];
	int idade;
	float renda;
	char sexo;
	char cpf [15];
};

int main()
{
	struct formulario form[MAX];
	int i;
	
	for(i=0;i<MAX;i++)
	{
		printf("--> Realizando cadastro %d\n\n",i+1);
		printf("------------------------------\n");
		
		printf("Degite seu nome: ");
		gets(form[i].nome);
		
		printf("Degite sua idade: ");
		scanf("%d",&form[i].idade);
		getchar();
		
		printf("Digite o sexo: ");
		scanf("%c",&form[i].sexo);
		
		printf("Digite a renda: ");
		scanf("%f",&form[i].renda);
		getchar();
		
		printf("Digite o CPF: ");
		gets(form[i].cpf);
		system("CLS");
	}
	
	for(i=0;i<MAX;i++)
	{	
		printf("---------------------------------------------\n");
		printf("Dados Cadastrados Formulario %d\n\n",i+1);
		puts(form[i].nome);
		puts(form[i].cpf);
		printf("Idade: %d\n",form[i].idade);
		printf("Renda: %.2f\n",form[i].renda);
		printf("Sexo: %c\n",form[i].sexo);
		printf("---------------------------------------------\n");
	}	printf("\n\n");
	
	system("PAUSE");
	return 0;
}

