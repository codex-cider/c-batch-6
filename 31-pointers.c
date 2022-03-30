#include <stdio.h>

void main()
{
    int a = 30;

    int *b;

    b = &a;

    // printf("Address of a is %X\n", &a);

    printf("%d\n", b);
    printf("%d\n", &b);
    printf("%d\n", *b);
}