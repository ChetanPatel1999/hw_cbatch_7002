// wap to print factors of given number.
#include <stdio.h>
void main()
{
    int i, num, c = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 444
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            c++;
        }
        if (c > 2)
        {
            break;
        }
    }
    if (c == 2)
    {
        printf("num is prime");
    }
    else
    {
        printf("num is not prime");
    }
}