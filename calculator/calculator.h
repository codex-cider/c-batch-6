#include <stdio.h>

void sum()
{
    int firstNumber, secondNumber;
    printf("Enter first number ");
    scanf("%d", &firstNumber);

    printf("Enter second number ");
    scanf("%d", &secondNumber);

    printf("SUM  is %d", firstNumber + secondNumber);
}

void sub()
{
    int firstNumber, secondNumber;
    printf("Enter first number ");
    scanf("%d", &firstNumber);

    printf("Enter second number ");
    scanf("%d", &secondNumber);

    printf("SUB  is %d", firstNumber - secondNumber);
}

void mul()
{
    int firstNumber, secondNumber;
    printf("Enter first number ");
    scanf("%d", &firstNumber);

    printf("Enter second number ");
    scanf("%d", &secondNumber);

    printf("MUL  is %d", firstNumber * secondNumber);
}

void div()
{
    float firstNumber, secondNumber;
    printf("Enter first number ");
    scanf("%f", &firstNumber);

    printf("Enter second number ");
    scanf("%f", &secondNumber);

    printf("DIV  is %.2f", firstNumber / secondNumber);
}

void options()
{
    int options;
    printf("Enter 1 for sum \n");
    printf("Enter 2 for sub \n");
    printf("Enter 3 for mul \n");
    printf("Enter 4 for div \n");
    scanf("%d", &options);

    switch (options)
    {
    case 1:
        // call sum fn
        sum();
        break;
    case 2:
        // call sub fn
        sub();
        break;
    case 3:
        // call mul fn
        mul();
        break;
    case 4:
        // call div fn
        div();
        break;
    default:
        printf("Wrong options selected ");
        break;
    }
}

void loopStart()
{
    int key;

    do
    {
        options();

        printf("\n\nWants to continue press 1 else any key ");
        scanf("%d", &key);

        printf("\n\n");

    } while (key == 1);
}
