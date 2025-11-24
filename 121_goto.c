// wap to check given number is even or odd using goto stmnt.
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num = 43;

    if (num % 2 == 0)
    {
        goto even;
    }
    else
    {
        goto odd;
    }

even:
    printf("num is even");
    exit(0);

odd:
    printf("num is odd");
}
