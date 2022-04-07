#include "calculator.h"

void main()
{
    int option;

    printf("Choose any option \n");
    printf("1 for addition \n");
    printf("2 for substraction \n");
    printf("3 for multiplication \n");
    printf("4 for division \n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        sum();
        break;
    case 2:
        printf("Perform SUB");
        break;
    case 3:
        printf("Perform MUL");
        break;
    case 4:
        printf("Perform DIV");
        break;
    default:
        printf("No Valid input");
        break;
    }
}