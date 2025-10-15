//. Write a program to convert upper char to lower char.
#include <stdio.h>
void main()
{
    char ch, res;
    printf("enter a char : ");
    scanf("%c", &ch); // B
    res = ch + 32;
    printf("lower char : %c", res);
}