// Write a program to accept two number from user and display greatest number.
#include <stdio.h>
void main()
{
    int a, b;
    printf("enter a value : ");
    scanf("%d", &a); // 8
    printf("enter b value : ");
    scanf("%d", &b); // 99
    if (a > b)
    {
        printf("greater num : %d", a);
    }
    else
    {
        printf("greater num : %d", b);
    }
}
