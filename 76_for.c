// wap to print number multple of 4 1 to given number.
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d", &n);         // 20
    for (i = 1; i <= n; i++) // 10
    {
        if (i % 4 == 0)
        {
            printf("%d ", i); // 4  8  12
        }
    }
}