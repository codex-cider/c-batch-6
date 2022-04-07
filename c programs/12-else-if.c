#include <stdio.h>

/*

Conditional Operators
>, <, >=, <=, ==, !=

*/

void main()
{
    int purchasingPrice;

    printf("Enter purchasing price ");
    scanf("%d", &purchasingPrice);

    if (purchasingPrice > 10000)
    {
        printf("Flat 10%% OFF");
    }
    else if (purchasingPrice > 5000)
    {
        printf("500 OFF");
    }
    else
    {
        printf("Thank you for shopping");
    }
}