#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dirent.h>

void Repertoire()
{
	struct dirent *lecture;
		DIR *rep;
			rep = opendir("." );
			while ((lecture = readdir(rep)))
{		printf("*REPERTOIRE==>");
		printf("%s\n", lecture->d_name);
		
}
	closedir(rep);


}
