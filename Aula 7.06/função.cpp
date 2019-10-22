#include<stdlib.h>
#include<stdio.h>

int soma(int,int);
int main()
{
	int x=3;
	int y=7;
	int retorno;
	retorno=soma(x,y);
	printf("%d\n",retorno);
	system ("PAUSE");
	return 0;
}

int soma (int n1, int n2)
{
	int z;
	z=n1+n2;
	return z;
}
