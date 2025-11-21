#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 20; i++)
    {
        if (i < 7 || i > 15)
        {
            continue;
        }
        printf("%d ", i); // 15 16 17 18 19 20
    }
}