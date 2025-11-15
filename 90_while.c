// . Write a program to display sum 1 to n ( given number).
#include <stdio.h>
void main()
{
    int i, n, sum = 0;
    printf("enter a num : ");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("sum 1 to %d = %d", n, sum);
}