#include <stdio.h>
void main()
{
    int num;
    do
    {
        printf("papa please purchesd bike ! \n");
        printf("presss 1 if bike is not purchesed : ");
        scanf("%d", &num);
    } while (num == 1);
    printf("thanks papa for bike");
}