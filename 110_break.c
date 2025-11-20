// wap to search a given number in given table.
#include <stdio.h>
void main()
{
    int num, search, i, f = 0;
    printf("enmter table num : ");
    scanf("%d", &num); // 6
    printf("enter search num : ");
    scanf("%d", &search);     // 12
    for (i = 1; i <= 10; i++) // 2
    {
        if (search == num * i)
        {
            f = 1;
            break;
        }
    }

    if (f == 1)
    {
        printf("num is found");
    }
    else
    {
        printf("num is not found");
    }
}