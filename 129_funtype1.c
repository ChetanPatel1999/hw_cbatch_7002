// no return type , no paramter
#include <stdio.h>
void addition()
{
    int a, b, c;
    printf("you choosed addition app :\n");
    printf("enter first num = ");
    scanf("%d", &a);
    printf("enter second num = ");
    scanf("%d", &b);
    c = a + b;
    printf("addition = %d", c);
}
void cube()
{
    int num, res;
    printf("enter a num : ");
    scanf("%d", &num);
    res = num * num * num;
    printf("cube of %d = %d\n", num, res);
}
void greatestNum()
{
    int a, b;
    printf("enter a value : ");
    scanf("%d", &a); // 8
    printf("enter b value : ");
    scanf("%d", &b); // 99
    if (a > b)
    {
        printf("greater num : %d", a);
    }
    else
    {
        printf("greater num : %d", b);
    }
}
void main()
{
    greatestNum();
}