// . Write a program that takes a number as input and displays its digits in
// reverse order as a new number.
#include <stdio.h>
void main()
{
    int num, rev = 0, rem, temp;
    printf("enter a num : ");
    scanf("%d", &num); // 121
    temp = num;
    while (num > 0)
    {
        rem = num % 10;

        rev = rev * 10 + rem; // 534

        num = num / 10;
    }
    if (rev == num)
    {
        printf("num is plindrom");
    }
    else
    {
        printf("num is not plindrom");
    }
}