// Write a program to convert specified days into years,month, weeks and days.
#include <stdio.h>
void main()
{
    int day, year, month, week;
    printf("enter day : ");
    scanf("%d", &day);
    year = day / 365;
    day = day % 365;
    month = day / 30;
    day = day % 30;
    week = day / 7;
    day = day % 7;

    printf("year = %d\n", year);
    printf("month = %d\n", month);
    printf("week = %d\n", week);
    printf("day = %d\n", day);
}
