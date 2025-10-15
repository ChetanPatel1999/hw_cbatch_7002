// Write a program to convert weight gram into kg.
#include <stdio.h>
void main()
{
    float kg, gram;
    printf("enter weight in gram : ");
    scanf("%f", &gram); // 4200
    kg = gram / 1000;
    printf("weight in kg = %.1f kg", kg);
}