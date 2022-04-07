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

    for (int i = 0; i < 5; i++)
    {

        if (i == 0)
        {
            current = (struct mobile *)malloc(sizeof(struct mobile));
            start = current;
        }
        else
        {
            current->next = (struct mobile *)malloc(sizeof(struct mobile));
            current = current->next;
        }

        printf("Enter mobile name ");
        gets(current->name);

        printf("Enter mobile color ");
        gets(current->color);

        printf("Enter mobile storage ");
        gets(current->storage);

        current->next = NULL;
    }

    struct mobile *p = start; // get address of first memory

    while (p != NULL)
    {
        printf("\n/**********  Mobile Details  ******************/\n");
        printf("Mobile Name     %s\n", p->name);
        printf("Mobile Color    %s\n", p->color);
        printf("Mobile Storage  %s\n", p->storage);
        p = p->next;
    }
}