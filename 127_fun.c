// Write a program to make simple calculator.
//    Press 1 to addition
//    Press 2 to subtraction
//    Press 3 to multiplication
//    Press 4 to division

// make this task using function
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
void subtraction()
{
    int a, b, c;
    printf("you choosed subtraction app :\n");
    printf("enter first num = ");
    scanf("%d", &a);
    printf("enter second num = ");
    scanf("%d", &b);
    c = a - b;
    printf("subtraction = %d", c);
}

void multiplication()
{
    int a, b, c;
    printf("you choosed multiplication app :\n");
    printf("enter first num = ");
    scanf("%d", &a);
    printf("enter second num = ");
    scanf("%d", &b);
    c = a * b;
    printf("multiplication = %d", c);
}
void division()
{
    int a, b, c;
    printf("you choosed division app :\n");
    printf("enter first num = ");
    scanf("%d", &a);
    printf("enter second num = ");
    scanf("%d", &b);
    c = a / b;
    printf("division = %d", c);
}
void main()
{
    int num;
    printf("<-----welcome to my calculator----->\n");
    printf("      press 1 for addition : \n");
    printf("      press 2 for subtraction : \n");
    printf("      press 3 for multiplication : \n");
    printf("      press 4 for division : \n");
    printf("      choose any option : ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        addition();
        break;
    case 2:
        subtraction();
        break;
    case 3:
        multiplication();
        break;
    case 4:
        division();
        break;
    default:
        printf("you choosed wrong option please press 1 to 4 number");
    }
}