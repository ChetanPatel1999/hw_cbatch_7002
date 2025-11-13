// wap to print table of given number.
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d", &n);          // 12
    for (i = 1; i <= 10; i++) // 3
    {
        printf("%d\n", n * i);
    }
}