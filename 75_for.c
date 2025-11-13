// wap to print number 1 to given number.
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d", &n); // 15
    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
}