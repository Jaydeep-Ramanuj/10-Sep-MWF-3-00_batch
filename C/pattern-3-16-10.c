#include <stdio.h>

void main()
{

    // *****
    // ****
    // ***
    // **
    // *

    // for (int i = 5; i > 0; i--)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    for (int i = 0; i <= 4; i++)
    {
        for (int j = 5; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}