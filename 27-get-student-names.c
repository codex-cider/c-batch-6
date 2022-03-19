#include <stdio.h>

void main()
{
    char student[5][20];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter student name ");
        // scanf("%s", &student[i]); // it not stored space
        gets(student[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Student Name: %s \n", student[i]);
    }
}
