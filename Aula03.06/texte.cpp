#include <iostream>
#include <fstream>
#include <ctype.h>
int main()
{
char palavra[40];
int i;
printf("Digite uma palavra:");
gets(palavra);
for(i=0; palavra[i]!= ”; i++)
{
	palavra[i] = toupper(palavra[i]);
}

printf("\n\nA palavra convertida em maiusculo: %s\n\n",palavra);
    system("PAUSE");
return 0;
}
