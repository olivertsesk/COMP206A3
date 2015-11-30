
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "list.h"

void add(int bon)
{
    struct node *newNode, *current;

    newNode = (struct node*)malloc(sizeof(struct node));    
    if(newNode == NULL){
        fprintf(stderr, "Error\n"); //Unable to allocate memory 
    }
    newNode->head = bon; 

    current = (struct node*) first; 
    while (current->tail != NULL)   
    {
        current = current->tail;
    }
    current->tail = newNode;  
    current = newNode;      
    current->tail = NULL;    
}
struct node *find(int bon)
{    
        if (first->head == bon)
        {     
                point = first->tail;  
                return first;       
        }
        while (first->tail->head != bon && first->tail->tail != NULL)  
        {  
                first = first->tail;             
        }     
        if (first->tail->head != bon)
        {      
                return NULL;            
        }
        else
        {
                return first->tail;     
        }
}
void prettyPrint()//printing the list
{ 
    if(first!=NULL)
    {
        while (first->tail != NULL)
        {
                printf("%d, ", first->head);
                first = first->tail;
        }
        printf("%d\n", first->head); 
        first = point; 
    }
    else
    {
        printf("The list is empty lol\n");//list is empty

    }
}
int delete(int bon)
{
        struct node *dest;    
        if (find(bon) == NULL)//if bon is not in list ,print not found
        {  
                first = point; 
                printf("not found.\n");
        return 0;   
        }
           else
        {
                dest = find(bon); //if bon is in the list delete
                first->tail = dest->tail; 
                first = point; 
        printf("found and deleted\n");
                return 1;
        }
}
