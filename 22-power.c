#include <stdio.h>

int power(int number, int pow)
{
    int result = 1;
    for (int i = 0; i < pow; i++)
    {
        result = result * number;
    }
    return result;
}

void main()
{
    int n, p, result;
    printf("Enter any number ");
    scanf("%d", &n);
    printf("Enter power ");
    scanf("%d", &p);

    result = power(n, p);

    printf("Power %d of %d is %d", p, n, result);
}