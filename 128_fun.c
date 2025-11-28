#include <stdio.h>
void game();
void print();
void fun()
{
    game();
    printf("hi i am fun\n");
    game();
}
void game()
{
    printf("hello i am game\n");
    print();
}
void print()
{
    printf("hello i am print\n");
}
void main()
{
    printf("hello i am main\n");
    fun();
    printf("main fun is end");
}