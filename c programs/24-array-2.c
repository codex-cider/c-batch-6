#include <stdio.h>

void main()
{
    int a[5] = {10, 20, 30}; // array declaration + initialization

    printf("Enter any number ");
    scanf("%d", &a[1]);

    printf("a[0] is %d\n", a[0]);
    printf("a[1] is %d\n", a[1]);
    printf("a[2] is %d\n", a[2]);
    printf("a[3] is %d\n", a[3]);
    printf("a[4] is %d\n", a[4]);
}