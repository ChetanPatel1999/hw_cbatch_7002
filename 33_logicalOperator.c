// logical Operator
#include <stdio.h>
void main()
{
    int ans;
    // ans = 12 > 7 && 6 == 6 && 34 > 9;
    // ans = 12 > 77 || 6 == 9 || 8 > 22;
    // ans = !(12 > 7);

    // ans = !(12 > 7 && 7 == 4);
    // ans = 12 > 9 && !(7 == 5);

    ans = (12 + 5) * 10;
    printf("ans = %d ", ans);
}