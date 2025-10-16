// Write a program to print reverse number of given number.
#include <stdio.h>
void main()
{
    int num, r, s, t, rev;
    printf("enter a num : ");
    scanf("%d", &num); // 567

    r = num / 100;
    s = (num % 100) / 10;
    t = num % 10;

    rev = r + s * 10 + t * 100;

    printf("reverse number = %d", rev);
}