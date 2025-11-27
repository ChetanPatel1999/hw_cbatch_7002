#include <stdio.h>
void addition()
{
    int a, b, c;
    printf("this is addition funtion\n");
    printf("enter first num : ");
    scanf("%d", &a);
    printf("enter second num : ");
    scanf("%d", &b);
    c = a + b;
    printf("addition : %d\n", c);
}
void subtraction()
{
    int a, b, c;
    printf("this is subtraction funtion\n");
    printf("enter first num : ");
    scanf("%d", &a);
    printf("enter second num : ");
    scanf("%d", &b);
    c = a - b;
    printf("subtraction : %d\n", c);
}
void main()
{
    printf("hello i am main fun\n");
    addition();
    printf("inside main function\n");
    subtraction();
    
}
