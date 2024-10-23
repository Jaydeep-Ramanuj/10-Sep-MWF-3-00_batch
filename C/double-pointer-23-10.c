#include <stdio.h>

void main()
{

    int number = 10;

    int *ptr;
    int **pop;
    int ***popop;

    ptr = &number;

    pop = &ptr;
    popop = &pop;

    printf("\n Address of number: %p", number);
    printf("\n Address of ptr: %p", ptr);
    printf("\n Address of pop: %p", pop);
    printf("\n Address of popop: %p", popop);
    printf("\n====");
    printf("\n value of number: %d", number);
    printf("\n value of ptr: %d", *ptr);
    printf("\n value of pop: %p", *pop);
    printf("\n value of popop: %p", *popop);
}