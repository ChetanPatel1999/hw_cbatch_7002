// Write a program to check whether a character is an uppercase  so convert in lower
//  case or lowercase so convert in uppercase char .
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a char = ");
    scanf("%c", &ch); // Z
    // printf("origenal char : %c\n", ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("upper case : %c", ch - 32);
    }
    else
    {
        printf("lower case : %c", ch + 32);
    }
}