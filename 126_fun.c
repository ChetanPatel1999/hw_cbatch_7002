#include <stdio.h>
void cube()
{
    int num, res;
    printf("enter a num : ");
    scanf("%d", &num);
    res = num * num * num;
    printf("cube of %d = %d\n", num, res);
}
void main()
{
    int i;
    for (i = 1; i <= 5; i++) // 3
    {
        cube();
    }
    
}