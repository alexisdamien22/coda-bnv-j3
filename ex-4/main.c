#include <stdlib.h>
#include <stdio.h>

int main()
{
	int i=0;
	int max;
	printf("Choisissez un entier positif différent de 0 :\n");
	scanf("%d",&max);
	while (i<=max)
	{
		printf("%d\n",i);
		i++;
	}
	exit(0);
}
