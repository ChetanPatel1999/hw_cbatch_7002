#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 20; i++)
    {
        if (i > 7 && i < 15)
        {
            continue;
        }
        if (i + i == 36)
        {
            break;
        }
        printf("%d ", i);// 1 2 3 4 5 6 7 15 16 17 
    }
}