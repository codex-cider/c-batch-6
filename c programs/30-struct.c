#include <stdio.h>

struct Student
{
    char name[20];
    char rollNumber[20];
    char branch[10];
};

void main()
{
    struct Student st;

    printf("Enter student name ");
    gets(st.name);
    printf("Enter student Roll Number ");
    gets(st.rollNumber);
    printf("Enter student branch ");
    gets(st.branch);

    printf("\n/*****************************************/\n");
    printf("Student Name         %s\n", st.name);
    printf("Student Roll Number  %s\n", st.rollNumber);
    printf("Student Branch       %s\n", st.branch);
    printf("\n\n");
}
