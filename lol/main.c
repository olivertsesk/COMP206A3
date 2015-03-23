#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int main()
{
	
	char filename[256];
	char line[256];
	int temp;
	struct node *test;
	head==NULL;
	FILE *file;
	int n;
	printf("Enter the name of the file\n");

	scanf("%s\n",&filename);
	file=fopen(filename,"r");

	if(file!=NULL)
	{
		file=fopen(filename,"r");
		
				while ( fgets ( line, sizeof line, file ) != NULL )
				{
					
					temp = atoi(line);
					add(temp);
				}
	}
	else
	{
		while(file==NULL)
		{
			printf("Enter the name of the file\n");
			scanf("%s\n",&filename);
			//printf("%s\n",&filename);

			file=fopen(filename,"r");
			
					while ( fgets ( line, sizeof line, file ) != NULL )
					{
						
						temp = atoi(line);
						add(temp);
					}
					
		}
		fclose(file);
	
	}
	
	prettyPrint(test);
	
	// asking use a number

	//int n;
	printf("Please enter a number");
	//int n;

	scanf("%d,&n");
	delete(n);
		delete(75);
	prettyPrint(test);
	//printf("Please enter a number\n");
	return 0;
}	
	

