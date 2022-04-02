#include <stdio.h>
#include <stdlib.h>

struct node
{
    int a;
    struct node *next;
};

void main()
{
    struct node *current = NULL, *start = NULL;

    current = (struct node *)malloc(sizeof(struct node));
    start = current;

    current->a = 50;
    current->next = (struct node *)malloc(sizeof(struct node));

    current = current->next; // for next memory

    current->a = 60;
    current->next = (struct node *)malloc(sizeof(struct node));

    current = current->next; // for next memory

    current->a = 100;
    current->next = NULL;

    struct node *n = start;
    while (n != NULL)
    {
        printf("a is %d\n", n->a);
        n = n->next; // for next memory
    }
}