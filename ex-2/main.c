#include <stdlib.h>
#include <stdio.h>

int main()
{
	char operation;
	printf("Choisissez une opération a effectuer\n");
	scanf("%c", &operation);
	if(operation==43)
	{
		printf("C'est une addition\n");
	}
	else if(operation==45)
	{
		printf("C'est une soustraction\n");
	}
	else if(operation==42)
	{
		printf("C'est une multiplication\n");
	}
	else if(operation==47)
	{
		printf("C'est une division\n");
	}
	else if(operation==37)
	{
		printf("C'est une module\n");
	}
	else
	{
		printf("Cette operation n'existe pas\n");
	}
	return(0);
}
