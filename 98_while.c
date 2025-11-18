// Write a program that takes a number and a single digit as input, and counts
//  how many times the digit appears in the given number.
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
    printf("%d is appear %d times in number %d", n, count, temp); //
}