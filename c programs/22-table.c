#include <stdio.h>

void main()
{
    int table, count;

    printf("Enter number for table ");
    scanf("%d", &table);

    for (count = 1; count <= 10; count++)
    {
        printf("%d x %d = %d\n", table, count, count * table);
    }
}