#include <stdio.h>

typedef struct node
{
int data;
struct node *next;
}node_t;

node_t * head = NULL;
head = malloc(sizeof(node_t));
if (head == NULL) {
    return 1;
}

head->val = 1;
head->next = NULL;

node_t * head = NULL;
head = malloc(sizeof(node_t));
head->val = 1;
head->next = malloc(sizeof(node_t));
head->next->val = 2;
head->next->next = NULL;

void print_list(node_t * head) {
    node_t * current = head;

    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;
    }
}
void add(node_t * head, int val) {
    node_t * current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    /* now we can add a new variable */
    current->next = malloc(sizeof(node_t));
    current->next->val = val;
    current->next->next = NULL;
}
// void push(node_t ** head, int val) {
//     node_t * new_node;
//     new_node = malloc(sizeof(node_t));

//     new_node->val = val;
//     new_node->next = *head;
//     *head = new_node;
// }
int removeHead(node_t ** head) {
    int retval = -1;
    node_t * next_node = NULL;

    if (*head == NULL) {
        return -1;
    }

    next_node = (*head)->next;
    retval = (*head)->val;
    free(*head);
    *head = next_node;

    return retval;
}
int removeLast(node_t * head) {
    int retval = 0;
    /* if there is only one item in the list, remove it */
    if (head->next == NULL) {
        head->val
        free(head);
        head = NULL;
        return retval;
    }

    node_t * current = head;

    while (current->next->next != NULL) {
        current = current->next;
    }
}