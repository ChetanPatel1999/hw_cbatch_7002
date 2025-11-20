// Write a program using a do...while loop that keeps taking numbers from
// the user and adds them to a running sum until the user presses 1. Finally,
// display the total sum.
#include <stdio.h>
void main()
{
    int mark, sum = 0, num, count = 0;
    do
    {
        printf("enter student%d marks : ", ++count);
        scanf("%d", &mark);
        sum = sum + mark;
        printf("enter 1 if more student : ");
        scanf("%d", &num); // 1

    } while (num == 1);
    printf("total marks sum = %d ", sum);
}