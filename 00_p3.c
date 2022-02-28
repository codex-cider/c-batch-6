#include <stdio.h>

void main()
{
    int option;

    printf("Choose any option \n");
    printf("1 for addition \n");
    printf("2 for substraction \n");
    printf("3 for multiplication \n");
    printf("4 for division \n");
    scanf("%d", &option);

    if (option >= 1 && option <= 4)
    {
        float firstNumber, secondNumber, result;

        printf("Enter first number ");
        scanf("%f", &firstNumber);

        printf("Enter second number ");
        scanf("%f", &secondNumber);

        if (option == 1)
        {
            result = firstNumber + secondNumber;
            printf("SUM is %.2f", result);
        }
        else if (option == 2)
        {
            result = firstNumber - secondNumber;
            printf("SUB is %.2f", result);
        }
        else if (option == 3)
        {
            result = firstNumber * secondNumber;
            printf("MUL is %.2f", result);
        }
        else if (option == 4)
        {
            result = firstNumber / secondNumber;
            printf("DIV is %.2f", result);
        }
    }
    else
    {
        printf("Wrong option");
    }
}