#include <stdio.h>

void main()
{

    float cgpa;
    char yesOrNot;

    printf("Enter CGPA ");
    scanf("%f", &cgpa);

    if (cgpa > 7 && cgpa < 8)
    {
        printf("Have attend Google Workshop press 'y' else 'n' ");
        scanf("\n%c", &yesOrNot);
    }

    // if (cgpa > 8)
    // {
    //     printf("Can attent placement drive");
    // }
    // else if (cgpa > 7 && yesOrNot == 'y')
    // {
    //     printf("Can attent placement drive");
    // }
    // else
    // {
    //     printf("No placement");
    // }

    if (cgpa > 8 || (cgpa > 7 && yesOrNot == 'y'))
    {
        printf("Can attent placement drive");
    }
    else
    {
        printf("No placement");
    }
}
