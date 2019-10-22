#include<stdlib.h>
#include<stdio.h>

//Structs - Registro
//Estrutura de Dados Heterogêneas

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
	struct formulario form1 ;
	
	printf("Degite seu nome: ");
	gets(form1.nome);
	
	printf("Degite sua idade: ");
	scanf("%d",&form1.idade);
	getchar();
	
	printf("Digite o sexo: ");
	scanf("%c",&form1.sexo);
	
	printf("Digite a renda: ");
	scanf("%f",&form1.renda);
	getchar();
	
	printf("Digite o CPF: ");
	gets(form1.cpf);
	
	system("cls");
	system ("PAUSE");
	
	
	printf("DADOS DIGITADOS\n");
	puts(form1.nome);
	puts(form1.cpf);
	printf("Idade: %d\n",form1.idade);
	printf("Renda: %.2f\n",form1.renda);
	printf("Sexo: %c\n",form1.sexo);
	
	system("PAUSE");
	return 0;
}
