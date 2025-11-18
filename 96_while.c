//  Write a program that takes a number as input and counts how many even
// digits it contains.
#include <stdio.h>
void main()
{
    int num, c = 0, rem;
    printf("enter a num : ");
    scanf("%d", &num); // 3452
    while (num > 0)
    {
        rem = num % 10;
        if (rem % 2 == 0)
        {
            c++;
        }
        num = num / 10;
    }
    printf("even number count = %d", c);
}