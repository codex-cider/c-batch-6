#include <stdio.h>
#include <stdlib.h>

struct mobile
{
    char name[20];
    char color[20];
    char storage[20];
    struct mobile *next;
};

void main()
{
    struct mobile *start, *current;

    current = (struct mobile *)malloc(sizeof(struct mobile));
    start = current;

    printf("Enter mobile name ");
    gets(current->name);

    printf("Enter mobile color ");
    gets(current->color);

    printf("Enter mobile storage ");
    gets(current->storage);

    current->next = (struct mobile *)malloc(sizeof(struct mobile));
    current = current->next;

    printf("Enter mobile name ");
    gets(current->name);

    printf("Enter mobile color ");
    gets(current->color);

    printf("Enter mobile storage ");
    gets(current->storage);

    current->next = (struct mobile *)malloc(sizeof(struct mobile));
    current = current->next;

    printf("Enter mobile name ");
    gets(current->name);

    printf("Enter mobile color ");
    gets(current->color);

    printf("Enter mobile storage ");
    gets(current->storage);

    current->next = NULL;

    struct mobile *p = start; // get address of first memory
    // print linked list from starting memory
    printf("\n/**********  First Mobile Details  ******************/\n");
    printf("Mobile Name     %s\n", p->name);
    printf("Mobile Color    %s\n", p->color);
    printf("Mobile Storage  %s\n", p->storage);

    p = p->next; // get address of second memory from first memory

    printf("\n/**********  Second Mobile Details  ******************/\n");
    printf("Mobile Name     %s\n", p->name);
    printf("Mobile Color    %s\n", p->color);
    printf("Mobile Storage  %s\n", p->storage);

    p = p->next; // get address of third memory from second memory

    printf("\n/**********  Third Mobile Details  ******************/\n");
    printf("Mobile Name     %s\n", p->name);
    printf("Mobile Color    %s\n", p->color);
    printf("Mobile Storage  %s\n", p->storage);
}