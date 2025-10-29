#include <stdio.h>
void main()
{
    float a, b, c;
    printf("enter value of a = ");
    scanf("%f", &a);
    printf("enter value of b = ");
    scanf("%f", &b);
    printf("value of a = %.1f\n", a);
    printf("value of b = %.1f\n", b);
    c = a + b;
    printf("addition = %.1f", c);
}