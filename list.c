#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
int data;
struct node *next;
}
struct node *head;
struct node *tail;

init(void)
{
head=(struct node *) malloc(sizeof *head);
    tail=(struct node *) malloc(sizeof *head);
    head->next = tail; tail->next = tail;
}
struct node *add(int v) 
{
    struct node *ptr;
    struct node *t;
    ptr=head;
    while (ptr->next != tail) ptr = ptr->next;
    t=(struct node *) malloc(sizeof *t);
    t->value=v;
    t->next = tail;
    ptr->next = t;
    return ptr;
}

struct node *insert(int v, struct node *ptr) {
    struct node *t;
    t=(struct node *) malloc(sizeof *t);
    t->value=v;
    t->next = tail;
    ptr->next = t;
    return ptr;
    }   
    
void delete(struct node *ptr) {
    struct node *t;
    t = ptr->next;
    ptr->next = ptr->next->next;
    free(t);
    }

