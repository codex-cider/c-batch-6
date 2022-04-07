#include <stdio.h>

int sum()
{
    int a, b;
    printf("Enter any number ");
    scanf("%d", &a);

    printf("Enter second number ");
    scanf("%d", &b);

    return a + b;
}

void main()
{
    int result;
    result = sum();
    printf("Result %d", result);
}