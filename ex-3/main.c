#include <stdlib.h>
#include <stdio.h>

int main()
{
	char mot[50];
	printf("Saisissez un mot de moins de 50 caractères :\n");
	scanf("%s",mot);
	int i = 0;
	while(i<5)
	{
		i++;
		printf("%d : %s\n",i,mot);
	}
	exit(0);
}
