#include "common.h"
#include <stdio.h>
#include <stdlib.h>
#include<dirent.h>
#include "lab1_lexical_analyzer/lexical_analyzer.h"
#include <sys/types.h>
#include <sys/stat.h>
#include<string.h>

int getAllTestcase(char filename[][256])
{
	/// \todo student should fill this function
	
	struct dirent* dir=NULL;
	DIR *p;
	int i=0;
	p=opendir("./testcase/");
	while(dir=readdir(p))
	{
			if(dir->d_name[0]=='.') continue;
			strcpy(filename[i],dir->d_name);
			i++;
			
	}

	

	return i;
}

