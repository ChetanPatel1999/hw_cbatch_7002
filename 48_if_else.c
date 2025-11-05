// Write a program to check whether a character is an alphabet or not using ascii code.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a char :- ");
    scanf("%c", &ch); // 1
    if (ch >= 97 && ch <= 122 || ch >= 65 && ch <= 90)
    {
        printf("char is alphabet");
    }
    else
    {
        printf("char is not alphabet");
    }
}