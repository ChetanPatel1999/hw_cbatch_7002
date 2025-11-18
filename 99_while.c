// Write a program that takes a number and a single digit as input, and checks
// whether the digit exists in the given number or not.
#include <stdio.h>
void main()
{
    int num, count = 0, rem, n, temp;
    printf("enter a num : ");
    scanf("%d", &num); // 43565
    temp = num;
    printf("enter a digit to count : ");
    scanf("%d", &n);
    while (num > 0)
    {
        rem = num % 10;

        if (rem == n)
        {
            count++;
        }

        num = num / 10;
    }
    if (count == 0)
    {
        printf("digit is not exist in number");
    }
    else
    {
        printf("digit is exist in number");
    }
}