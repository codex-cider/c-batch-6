#include <stdio.h>

void main()
{
    unsigned int a = 4294967295;
    signed int b = -100;

    unsigned int d = 4294967296;

    printf("a is %u\n", a);
    printf("b is %d\n", b);

    printf("d is %u\n", d); // print 0 with rounding 0-4294967295
}
