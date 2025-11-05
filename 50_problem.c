#include <stdio.h>
void main()
{
    int a;
    char b;
    printf("enter a num = ");
    scanf("%d", &a);

    printf("enter a char = ");
    scanf(" %c", &b);

    printf("character = %c\n", b);
    printf("number = %d\n", a);
}