// Write a program to check given char is vowel or consonant.
#include <stdio.h>
void main()
{
    char alpha;
    printf("enter a alphabet latter : ");
    scanf("%c", &alpha); // A
    switch (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u')
    {
    case 1:
        printf("alpha is vovel");
        break;
    case 0:
        printf("alpha is consonent");
        break;
    }
}