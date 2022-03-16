#include <stdio.h>

void main()
{
    int numbers[5];
    int largestNumber;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d number ", i + 1);
        scanf("%d", &numbers[i]);
    }
    largestNumber = numbers[0];
    for (int i = 0; i < 5; i++)
    {
        int n = numbers[i];
        if (n > largestNumber)
        {
            largestNumber = n;
        }
    }

    printf("Largest number is %d ", largestNumber);
}