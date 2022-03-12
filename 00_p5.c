#include <stdio.h>

void main()
{
    int numbers[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter value of a[%d] ", i);
        scanf("%d", &numbers[i]);
    }

    printf("\n-------------------------------------\n");
    for (int i = 0; i < 10; i++)
    {
        printf("a[%d] = %d\n", i, numbers[i]);
    }
}