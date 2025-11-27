#include <stdio.h>
void addition(); // function declaration
void main()
{
    printf("hello i am main fun\n");
    addition();  //function calling
}
void addition()  // defination
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
