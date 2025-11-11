// club entry and order somthing , generate bill
#include <stdio.h>
void main()
{
    int age, order;
    printf("enter your age : ");
    scanf("%d", &age); // 10
    if (age >= 18)
    {
        printf("welcome to my club !\n");
        printf("club menue :\n");
        printf("1. sandwitch  120\n");
        printf("2. burger  50\n");
        printf("3. cold coffi  100\n");
        printf("choose any option : ");
        scanf("%d", &order);
        if (order == 1)
        {
            printf("your sandwitch is orderd please pay 120 rs\n");
        }
        else if (order == 2)
        {
            printf("your burger is orderd please pay 50 rs\n");
        }
        else if (order == 3)
        {
            printf("your cold coffi is orderd please pay 100 rs\n");
        }
        else
        {
            printf("you choosed wrong number which out of menue");
        }
    }
    else
    {
        printf("you are not adult please try after %d year ", 18 - age);
    }
}