// Write a program to display number square 1 to n (given number).
#include <stdio.h>
void main()
{
    int i, n;
    i = 1;
    printf("enter a num : ");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("square of %d = %d \n", i, i * i);
        i++;
    }
}