#include<stdlib.h>//system("PAUSE")
#include<stdio.h>//printf e scanf

int main()
{
	char opcao;
	float n1,n2;
	
	printf("Digite sua opcao:\n");
	printf("Digite + para somar\n");
	printf("Digite - para subtrair\n");
	printf("Digite * para multiplicar\n");
	printf("Digite / para dividir\n");
	printf("Aguardando opcao: ");
	scanf("%c",&opcao);
	
	if(opcao=='+'||opcao=='-'||opcao=='*'||opcao=='/')
	{
		printf("Digite n1:");
		scanf("%f",&n1);
		printf("Digite n2:");
		scanf("%f",&n2);
	}
	switch(opcao)
	{
		case '+':
		printf("A soma eh: %.2f\n",n1+n2);
		break; 
		
		case '-':
		printf("A sub eh: %.2f\n",n1-n2);
		break; 
		
		case '*':
		printf("A mult eh: %.2f\n",n1*n2);
		break; 
		
		case '/':
		printf("A div eh: %.2f\n",n1/n2);
		break; 
		
		default:
		printf("Opcao invalida\n");	
	}
	system("PAUSE");
	return 0;
}
