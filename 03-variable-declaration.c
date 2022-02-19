#include <stdio.h>

void main()
{
    int firstNumber;
    int secondNumber;

    int f1, f2; // multiple variables declaration

    f1 = 20;

    firstNumber = f2 = 60;

    printf("%d + %d = %d\n", firstNumber, f1, f2);
    // 60 + 20 = 60

    printf("%d + %d = %d\n", firstNumber, f1, f1 + firstNumber);
    // 60 + 20 = 80
}
