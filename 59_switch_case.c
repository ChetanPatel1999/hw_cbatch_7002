// Write a program using switch-case to print your friend's name based on the
// first letter of their name.
#include <stdio.h>
void main()
{
    char first_later;
    printf("enter you friend name frist later : ");
    scanf("%c", &first_later); // k
   
    // if (first_later >= 'A' && first_later <= 'Z')
    // {
    //     first_later = first_later + 32;
    // }

    switch (first_later)
    {
    case 'm':
        printf("manish sharma");
        break;
    case 'p':
        printf("pavan prajapati");
        break;
    case 't':
        printf("tarun patel");
        break;
    case 'r':
        printf("rupesh chaturvedi");
        break;
    default:
        printf("you not have any friend which name start with %c", first_later);
    }
}