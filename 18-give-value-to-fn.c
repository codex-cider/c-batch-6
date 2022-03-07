#include <stdio.h>

int square(int p)
{
    return p * p;
}

void main()
{
    int a, result;

    printf("Enter any number for square ");
    scanf("%d", &a);
    result = square(a);

    printf("Result %d", result);
}
