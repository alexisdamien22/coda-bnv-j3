#include <stdlib.h>
#include <stdio.h>

int main()
{
	int number;
	printf("Choisissez un nombre entier\n");
	scanf("%d",&number);
	if(number > 42)
	{
		printf("Ce nombre eest superieur a 42\n");
	}
	else if(number < 42)
	{
		printf("Ce nombre est inferieur a 42\n");
	}
	else
	{
		printf("Ce nombre est egal a 42\n");
	}
	exit(0);
}

