#include <stdio.h>
void main()
{
    int age;
    printf("enter your age : ");
    scanf("%d", &age);
    printf("you can eating food\n");
    if (age >= 18)
    {
        printf("you can drive car\n");
        printf("you can vote\n");
    }
    printf("you can travle with your family\n");
}