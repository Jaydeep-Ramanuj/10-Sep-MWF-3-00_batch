#include <stdio.h>

void main()
{

    // int a = 1;

    // printf("1");
    // printf("\n2");
    // if (a == 10)
    // {
    //     printf("\n3");
    // }
    // printf("\n4");
    // printf("\n5");

    // syntax

    // if (condition)
    // {
    //     // code here, this code will only if provided condition is true
    // }

    int a = 1;
    if (a > 5)
    {
        printf("A is GT 5");
    }

    // if (condition)
    // {
    //     // code here, this code will only if provided condition is true
    // }
    // else
    // {
    //     // code , this code will only if provided condition is false
    // }

    // if (a > 10)
    // {
    //     printf("A is GT 10");
    // }
    // else
    // {
    //     printf("A is LT 10");
    // }

    // if (a > 10)
    //     printf("A is GT 10");
    // else
    //     printf("A is LT 10");

    // a > 10 ? printf("A is GT 10") : printf("A is LT 10");

    // printf(a > 10 ? "A is GT 10" : "A is LT 10");

    a > 10 && printf("A is GT 10");
    a > 10 || printf("A is LT 10");
}