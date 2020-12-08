#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

void HrSystem()
{
  int h, min, s;
  	time_t now;
   
  		//fonction de l'heure actuelle
  			time(&now);
  				printf("Aujourd'hui est : %s", ctime(&now));
  				struct tm *local = localtime(&now);
 			 h = local->tm_hour;        
 		min = local->tm_min;       
  	s = local->tm_sec;       
  //Affichage de l'heure
  printf("Il est: %02d:%02d:%02d\n", h, min, s);
    getch();
    


}

