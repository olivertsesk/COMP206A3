#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
	char *c;
	int temp;
	struct node *test;
	head==NULL;
	FILE *filename;

	printf("Enter the name of the file\n");

	scanf("%s\n,filename");

	while(filename == NULL)
	{
		scanf("%s\n,filename");


		if(filename != NULL)
		{
			fopen(filename,"r");

				
				while(!feof(filename))
				{

					add(atoi(fgets(filename)));
				}

		}
	}
		fclose(filename);
}	
	

