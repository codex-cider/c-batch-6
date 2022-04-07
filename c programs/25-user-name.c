#include <stdio.h>

void main()
{
    char firstName[20];

    printf("Enter user first name ");
    scanf("%s", &firstName);

    printf("Hi %s", firstName);
}