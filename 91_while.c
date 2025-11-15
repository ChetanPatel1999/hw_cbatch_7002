// . Write a program to display sum 1 to n ( given number) only even number.
#include <stdio.h>
void main()
{
    int i, n, sum = 0;
    printf("enter a num : ");
    scanf("%d", &n); // 10
    i = 1;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        i++;
    }
    printf("sum 1 to %d = %d", n, sum);
}