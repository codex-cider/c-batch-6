#include <stdio.h>

void main()
{
    int number;

    printf("How many starts you want ");
    scanf("%d", &number);

    // for (int i = 1; i <= number * number; i++)
    // {
    //     printf("* ");
    //     if (i % number == 0)
    //     {
    //         printf("\n");
    //     }
    // }

    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("# ");
        }
        for (int j = i; j < number; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}