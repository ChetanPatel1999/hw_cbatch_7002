// no return type but with parameter
#include <stdio.h>
void addition(int a, int b)
{
    int c;
    c = a + b;
    printf("addition = %d\n", c);
}
void cube(int num)
{
    int res;
    res = num * num * num;
    printf("cube of %d = %d\n", num, res);
}

void greatestNum(int a, int b)
{
    if (a > b)
    {
        printf("greater num : %d", a);
    }
    else
    {
        printf("greater num : %d", b);
    }
}

void table(int n) // 6
{
    int i, res;
    for (i = 1; i <= 10; i++)
    {
        res = n * i;
        printf("%d \n", res);
    }
    printf("-------------\n");
}
void range(int s, int e)
{
    int i;
    for (i = s; i <= e; i++)
    {
        cube(i);
    }
}
void main()
{

    range(3, 8);
    // table(7);
    // table(12);
    // greatestNum(1400, 700);
    // cube(6);
    // addition(6, 9);
    // addition(12, 50);
    // addition(5, 7);
}