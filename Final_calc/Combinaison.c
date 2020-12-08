#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

double factor(int nbr)
{
    int i;
    double fact=1;

    for(i=nbr;  i>=1; i--)
    {
        fact=fact*i;
    }
    return fact;
}

void Combinaison()
{
    int d, p,n;
    double comb;
    printf("Calcul du combinaison de P dans n:\n");
    printf("Entrer la valeur de p:");
    scanf("%d",&p);
    printf("Entrer la valeur de n:");
	scanf("%d",&n);

if(p>n)
{
       while(p>n)
	   {
		    printf("Erreur!!! %d doit etre inferieur ou egale a %d. \n reesayer", p,n);
			printf("Entrer la valeur de p:");
		    scanf("%d",&p);
		    printf("Entrer la valeur de n:");
		    scanf("%d",&p);

       }
}
d=n-p;
comb=factor(n)/(factor(p)*factor(d));
printf("\nLa combinaison de %d dans %d est:%.0lf\n",p,n,comb);
printf("\n\nPour retourner au menu, pressez 2 fois la touche 'ENTER'");
    getch();

}

