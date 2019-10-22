#include<stdlib.h>
#include<stdio.h>
#define MAX 3


struct formulario
{
	char nome[30];
	int idade;
	float renda;
	char sexo;
	char cpf[15];
};

int main()
{
	struct formulario form[MAX];
	int i=0,j,opcao;
	
	do 
	{	
		printf("Digite a opcao desejada:\n");
		printf("1-Cadastrar novo.\n");
		printf("2-Imprimir cadastros.\n");
		printf("3-Imprimir cadastros que ganham mais que R$600,00 e com 20 anos.\n");
		printf("4-Imprimir nomes com a letra a ou A.\n");
		printf("5-Sair.\n");
		printf("Aguardando opcao:");
		scanf("%d",&opcao);
		getchar();
		system("CLS");
		switch (opcao)
		{
			case 1:
				printf("------------------------------\n");
				printf("Realizando cadastro %d.\n",j+1);
				printf("Digite seu nome: ");
				gets(form[i].nome);
				printf("Digite sua idade: ");
				scanf("%d",&form[i].idade);
				getchar();//para descartar o enter.
				printf("Digite sexo: ");
				scanf("%c",&form[i].sexo);
				printf("Digite renda: ");
				scanf("%f",&form[i].renda);
				getchar();
				printf("Digite CPF: ");
				gets(form[i].cpf);
				system("CLS");
				i++;
				break;
			
			case 2:
			for(j=0;j<i;j++)
			{	
				printf("-------------------------------\n");
				printf("Dados Cadastrados Form %d.\n\n",j+1);
				puts(form[j].nome);
				puts(form[j].cpf);
				printf("Idade: %d\n",form[j].idade);
				printf("Renda: %.2f\n",form[j].renda);
				printf("Sexo: %c\n",form[j].sexo);
				printf("-------------------------------\n");
				printf("\n\n");
				system("PAUSE");
				system("CLS");
			}
			break;
			
			case 3:
			for(j=0;j<i;j++)
			{
				if(form[j].renda<600&&form[j].idade>20)
				{
					printf("CPF:%s\n",form[j].cpf);
					printf("Nome:%s\n",form[j].nome);	
					printf("\n\n");
				}
			}	
			break;
			
			case 4:
			for(j=0;j<i;j++)
			{
				if(form[j].nome[0]==97||form[j].nome[0]==65)
				{
					printf("CPF:%s\n",form[j].cpf);
					printf("Nome:%s\n",form[j].nome);	
					printf("\n\n");
				}
			}	
			break;
							
			case 5:
				printf("Aquele abraco!\n");
				break;
				
			default:
				printf("Maluco\n");
				break;
		}
	}while(opcao!=5);
	
	system("PAUSE");
	return 0;
}




/*
	observação no BANCO DE DADOS 
	select*from
	formulario
	where renda > 600 
*/	
