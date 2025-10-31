#include <stdio.h>
void main()
{
    int a = 12, b;

    // b = a++; //post :- frist assign a value insid b than increase a value

    b = ++a;              // pre:- frist increase a value by 1 and then updated a ans assign in b
    printf("a= %d\n", a); // 13
    printf("b= %d\n", b); // 12
}