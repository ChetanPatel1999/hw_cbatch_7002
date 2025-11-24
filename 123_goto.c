// wap to print table of given numbers using goto stmnt.
#include <stdio.h>
void main()
{

    int i, n;
    printf("enter a num : ");
    scanf("%d", &n);
    i = 1;
lable:
    printf("%d \n", n * i);
    i++;
    if (i <= 10)
    {
        goto lable;
    }
}
