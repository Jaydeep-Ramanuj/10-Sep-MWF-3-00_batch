#include <stdio.h>

void main()
{
    // Type conversion, it is process of converting one data type variable to another data type variable

    // 1. Implicit type conversion, it is done automatically by compiler
    // 2. explicit type conversion, it is done by us (developers), we have to specify type in which we want to convert

    int n1 = 42;
    float n2 = 20.36;

    // printf("%d", (int)n2);
    // printf("%.2f", (float)n1);

    printf("\n%c", n1);

    char c = 'c';
    printf("\n%d", c);

    int num = 97;
    printf("\n%c", num);
}