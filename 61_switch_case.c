// Write a program to check given char is vowel or consonant.
#include <stdio.h>
void main()
{
    char alpha;
    printf("enter a alphabet latter : ");
    scanf("%c", &alpha); // A
    switch (alpha)
    {
    case 'a':;
    case 'e':;
    case 'i':;
    case 'o':;
    case 'u':
        printf("alpha is vovel");
        break;
    default:
        printf("alpha is consonent");
        break;
    }
}