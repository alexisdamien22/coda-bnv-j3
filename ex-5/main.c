#include <stdlib.h>
#include <stdio.h>

int main()
{
	int i=0;
	int max;
	char symbole;
	printf("Choisissez un symbole + (montant) ou - (descendant)\n");
	scanf("%c",&symbole);
	if(symbole!=43 || symbole!=45)
	{
		printf("Ce symbole n'est pas valide\n");
		exit(0);
	}
	printf("Choisissez un entier positif différent de 0 :\n");
	scanf("%d",&max);
	if(symbole==43)
	{
		while (i<=max)
		{
			printf("%d\n",i);
			i++;
		}
	}
	else if(symbole==45)
	{
		while (i<=max)
      		{
             		printf("%d\n",max);
              		max--;
       		}
	}
}
