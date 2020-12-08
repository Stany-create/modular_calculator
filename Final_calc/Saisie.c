#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <dirent.h>
#include <windows.h>
#include <math.h>
#include <time.h>
#include <dos.h>
#include <process.h>
#include "Factoriel.h"
#include "Combinaison.h"
#include "Puissance.h"
#include "HrSystem.h"
#include "DNS.h"
#include "Repertoire.h"
#include "Sonnerie.h"
#include "Menu.h"
#include "printip.h"

void Saisie()

 {	
while(true)
	{
		system("cls");
		Menu();
		int choix;
		scanf("%d",&choix);
		
		switch(choix)
	{
	
		case 1:
		 	Factoriel();
		break;
		
		case 2:
		    Combinaison();
		break;
		
		case 3:
		    system("time /t");
		break;
		
		case 4:
			printip();
		break;
		
		case 5:
		    DNS();
		break;
		
		case 6:
		   Repertoire();
		break;
		
		case 7:
			Puissance();
		break;
		
		case 8:
		    Sonnerie();
		break;
		
		case 0:
	    	exit(0);
	    	break;	
		}
		getch();
	}
	

}


