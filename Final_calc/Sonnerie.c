#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <process.h>


void Sonnerie()
	{
    int x;
    printf("*****BEEP*****");
 		//sonnerie
    	for (x = 0; x < 2; x++)
	{
        Beep(1500, 500);
     
    }
        
    }
    
