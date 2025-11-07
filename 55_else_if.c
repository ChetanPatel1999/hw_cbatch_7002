// Write a program to check whether a character is an alphabet, digit or special
// character.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a char : ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        printf("char is alphabet");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("char is digit");
    }
    else
    {
        printf("char is special symbol");
    }
}