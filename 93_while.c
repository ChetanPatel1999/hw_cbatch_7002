// Write a program to takes a number as input and calculates the sum of its
// individual digits.
#include <stdio.h>
    void main()
{
    int num, rem, res = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 562
    while (num > 0)
    {
        rem = num % 10;  //
        res = res + rem; //
        num = num / 10;  //
    }
    printf("sum of individul digit = %d", res); //
}