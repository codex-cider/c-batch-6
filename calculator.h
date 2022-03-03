#include <stdio.h>

void sum()
{
    float firstNumber, secondNumber, result;

    printf("Enter first number ");
    scanf("%f", &firstNumber);

    printf("Enter second number ");
    scanf("%f", &secondNumber);

    result = firstNumber + secondNumber;

    printf("SUM is %.2f\n", result);
}
