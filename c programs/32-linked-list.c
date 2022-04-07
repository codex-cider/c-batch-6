#include <stdio.h>

struct node
{
    int a;
    struct node *next;
};

void main()
{
    struct node n1, n2;
    struct node start;

    n1.a = 50;
    n1.next = &n2;

    n2.a = 60;
    n2.next = NULL;

    start = n1;
    printf("first node a is %d\n", start.a);
    start = *n1.next;
    printf("second node a is %d\n", start.a);
}