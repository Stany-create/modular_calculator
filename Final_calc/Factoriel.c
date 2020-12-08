#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void Factoriel()
{
    int i,n;
    double fact=1;
    printf("Entrer le nombre que vous voulez calculer:\n");
    scanf("%d",&n);
    
    for(i=n;  i>=1; i--)
    {
        fact*=i;
    }
	printf("%d!= %0.lf\n",n,fact);
	printf("\n\nPresser la touche 'ENTER' pour retourner au menu principal.");

}



