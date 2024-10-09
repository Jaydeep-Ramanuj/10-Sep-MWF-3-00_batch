#include <stdio.h>

void main()
{

    // looping statements, it is used to repeat some piece of code until some condition

    // 1. for
    // 2. while
    // 3. do...while

    // 1. for loop

    // syntax

    // for (initialization; condition; increment / decrement)
    // {
    //     // code
    // }

    // for (int counter = 1; counter <= 108; counter++)
    // {
    //     printf("\nRam %d", counter);
    // }

    // for (int counter = 1; counter <= 108; counter += 2)
    // {
    //     printf("\nRam %d", counter);
    // }

    // for (int counter = 108; counter > 0; counter--)
    // {
    //     printf("\nRam %d", counter);
    // }

    // for (int counter = 108; counter > 0; counter--)
    // {
    //     printf("\nRam %d", counter);
    //     for (int counter2 = 1; counter2 <= 3; counter2++)
    //     {
    //         printf("\nSita %d", counter2);
    //     }
    // }

    int result = 0;
    int oldVal;
    for (int i = 1; i <= 100; i++)
    {
        // result = result + i;
        oldVal = result;
        result += i;
        printf("\n%d + %d = %d", oldVal, i, result);
    }
    printf("\nSum of 1 to 100 is : %d", result);
}