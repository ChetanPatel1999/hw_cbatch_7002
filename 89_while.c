//  Write a program to display even number series.
#include <stdio.h>
void main()
{
    int i, n;
    i = 1;
    printf("enter a num : ");
    scanf("%d", &n);//20
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        i++;
    }
}