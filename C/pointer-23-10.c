#include <stdio.h>

void main()
{

    // pointer, it is special type of variable that stores address

    // &, address of operator, it gives address of specifies object

    // *, value operator / deference operator, it is used to get value stored at specified location

    int number = 10123;
    printf("%d", number);

    int *ptr;

    ptr = &number;
    printf("\n address of number: %p", number);
    printf("\n address of ptr: %p", ptr);
    printf("\n value of variable that ptr points:  %d", *ptr);
}