// wap to print 1 to 10 numbers using goto stmnt.
#include <stdio.h>
void main()
{

    int i;
    i = 1;
s:
    printf("%d ", i);
    i++;
    if (i <= 10)
    {
        goto s;
    }
}
