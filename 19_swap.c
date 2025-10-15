// Write a program to swap any two numbers whithout using third variable.
#include <stdio.h>
void main()
{
    int a, b;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);

    printf("values before swapping : \n");
    printf("a = %d\n", a); // 12
    printf("b = %d\n", b); // 25

    // a = a + b;
    // b = a - b;
    // a = a - b;

    a = a * b;
    b = a / b;
    a = a / b;

    printf("values after swapping : \n");
    printf("a = %d\n", a); // 25
    printf("b = %d\n", b); // 12
}