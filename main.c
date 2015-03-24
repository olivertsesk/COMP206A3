
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "list.h"

void main()
{
	FILE *fileptr;	//pointer the the file
	int bon, temp;	
	int check = 1;	//acts as a boolean
	char filename[256], input[20];	
		

	while (check)
	{
		printf("Enter a file name ");//taking the file name into filename
		scanf("%s", filename);   	
		fileptr = fopen(filename, "r");//giving permission to read only

		if (fileptr != NULL)
		{
			check = 0;	
		}
		else
		{
			printf("File not found.\n");
		}
	}	

	first = (struct node*) malloc (sizeof(struct node));	

	if (fscanf(fileptr, "%d", &bon) > 0)//add the first number in the list
	{	
		first->head = bon;
		first->tail = NULL;
		point = first;	
	}
	while (fscanf(fileptr, "%d", &bon) == 1)
	{
		 add(bon);//adding the number in the list
	}

	prettyPrint();//printing the list before making changes
	
	check = 1;	

	while(check)
	{
		if(first!=NULL)
	{
		printf("Enter a number to delete :");			
		scanf("%d", &temp);
		delete(temp);  //deleting entered number
		printf("This is the new list\n");
		prettyPrint();		//reprinting the list
		printf("Would you like to delete another number? ");//asking to print another number
		scanf("%s", input);	
		
		if ((strcmp("y", input) == 0) || (strcmp("yes", input) == 0) || (strcmp("Yes", input) == 0))
		{
			 continue;
		}
		else
		{
			check = 0;
		}
	}
	else//if the list is empty
	{
		 printf("The list is empty \n");
		check =0;
	}
	}	
}

	

