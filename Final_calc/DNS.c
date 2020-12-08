#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


void DNS()
{
	char lpBuffer[256];
		DWORD dwBufLength = sizeof(lpBuffer);
			if (GetComputerNameEx(ComputerNameDnsFullyQualified, lpBuffer, &dwBufLength))
				printf("Le 'DNS' de cette machine est:%s\n", lpBuffer);
			else
				fprintf(stderr, "La fonction GetComputerNameEx a echoue! n");

}

