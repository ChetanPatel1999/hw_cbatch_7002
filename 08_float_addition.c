//write a program two take two float value from user
//and display sum.
#include<stdio.h>
void main()
{
	float a,b,c;
	printf("this is addition app----> \n");
	printf("enter first value = ");
	scanf("%f",&a);  // 8
	printf("enter second value = ");
	scanf("%f",&b); // 6
	c=a+b;
    printf("sum of %.1f and %.1f = %.1f",a,b,c);
}
