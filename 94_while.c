//  Write a program to that takes a number as input and calculates the sum of
// only its even digits.
#include <stdio.h>
void main()
{
    int num, rem, res = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 4356
    while (num > 0)
    {
        rem = num % 10;
        if (rem % 2 == 0)
        {
            res = res + rem;
        }
        num = num / 10;
    }
    printf("sum of individula even digit = %d", res); //
}