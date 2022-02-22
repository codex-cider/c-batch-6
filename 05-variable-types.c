#include <stdio.h>

void main()
{
    int firstNumber;
    float secondNumber;

    firstNumber = 20.5;
    secondNumber = 50.58547;

    printf("First Number is %d\n", firstNumber);
    printf("First Number is %.1d\n", firstNumber);
    printf("First Number is %.2d\n", firstNumber);
    printf("First Number is %.3d\n", firstNumber);
    printf("First Number is %.4d\n", firstNumber);

    printf("\n-------------------------------------\n");

    printf("Second Number is %f\n", secondNumber);
    printf("Second Number is %.5f\n", secondNumber);
    printf("Second Number is %.2f\n", secondNumber);
    printf("Second Number is %6.3f\n", secondNumber);

    printf("\n-------------------------------------\n");

    double thirdNumber = 20.5;
    long fourthNumber = 55.5;
    printf("Third Number is %f\n", thirdNumber);
    printf("Fourth Number is %d\n", fourthNumber);

    printf("Size of int %d\n", sizeof(int));
    printf("Size of float %d\n", sizeof(float));
    printf("Size of long %d\n", sizeof(long));
    printf("Size of double %d\n", sizeof(double));

    printf("\n-------------------------------------\n");

    int a = 2067895677;
    long long int b = 20678956778;
    float c = 2067895677;

    printf("Size of long long int %d\n", sizeof(long long int));

    printf("a=%12.12d\tb=%lld\n", a, b);
    printf("a=%12d\tb=%lld\n", a, b);
    printf("c=%30.3f\n", c);
}
