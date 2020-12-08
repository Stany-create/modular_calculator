#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int n,x,pui;
void Puissance()
{
	printf("Entrer un nombre:");
		scanf("%d", &x);
			printf("Entrer un exposant:");
				scanf("%d", &n);
			pui=pow(x, n);
		//Affichage de la puissance
	printf("\nLa Puissance de %d expo %d est: %d", x,n,pui);
	  getch();
//    system("cls");

}
