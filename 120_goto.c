// wap to print 1 to 10 numbers using goto stmnt.
#include <stdio.h>
void main()
{

    int i;
    i = 1;
    printf("%d ", i);
    i++;
    if (i <= 10)
    {
        goto start;
    }
    printf("after goto stmnt1\n");
    printf("after goto stmnt2\n");
start:
    printf("after lable stmnt");
}
