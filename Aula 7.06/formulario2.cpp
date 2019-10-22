#include<stdlib.h>
#include<stdio.h>
#define MAX 2


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
	int i=0,j,opcao=2,parar=0;
	
	while(opcao!=3)
	{	
		printf("Digite a opcao desejada:\n");
		printf("1-Cadastrar novo.\n");
		printf("2-Imprimir cadastros.\n");
		printf("3-Sair.\n");
		printf("Aguardando opcao:");
		scanf("%d",&opcao);
		getchar();
		system("CLS");
		
		if(parar==MAX)
		{
			printf("LIMITE EXCEDIDO!!!");
			opcao=4;
			parar=MAX+1;
		}
		
		
		switch (opcao)
		{
			case 1:
				printf("------------------------------\n");
				printf("Realizando cadastro %d.\n",i+1);
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
				parar++;
				break;
			
			case 2:
			for(j=0;j<i;j++)
			{	
				printf("-------------------------------\n");
				printf("Dados Cadastrados Form %d.\n\n",i+1);
				puts(form[j].nome);
				puts(form[j].cpf);
				printf("Idade: %d\n",form[j].idade);
				printf("Renda: %.2f\n",form[j].renda);
				printf("Sexo: %c\n",form[j].sexo);
				printf("-------------------------------\n");
				printf("\n\n");
				system("PAUSE");
				//system("CLS");
			}
			system("CLS");
			break;
			
			case 3:
				printf("Aquele abraco!\n");
				break;
				
			case 4:
				printf("\n");
				break;	
				
			default:
				printf("Maluco\n");
				break;
		}
	}
	
	system("PAUSE");
	return 0;
}



