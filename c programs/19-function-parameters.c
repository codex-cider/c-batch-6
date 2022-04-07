#include <stdio.h>

int cube(int number)
{
    return number * number * number;
}

void main()
{
    int result, number;
    printf("Enter any number for cube ");
    scanf("%d", &number);
    result = cube(number);
    printf("Result is %d", result);
}