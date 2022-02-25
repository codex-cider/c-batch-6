#include <stdio.h>

void main()
{
    int number;
    printf("Enter Any number ");
    scanf("%d", &number);

    printf("You entered %d\n", number);
    printf("Address of number is %X", &number);
}
