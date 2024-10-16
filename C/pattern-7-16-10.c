#include <stdio.h>

void main()
{
    //     *
    //    ***
    //   *****
    //  *******
    // *********

    // 0000*
    // 000***
    // 00*****
    // 0*******
    // *********
    // for (int i = 0; i < 10; i += 2)
    // {

    //     for (int k = 4; k > counter; k--)
    //     {
    //         printf(" ");
    //     }

    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    //     counter++;
    // }

    int counter = 1;
    // for (int i = 1; i <= 10; i += 2)
    // {
    //     // printf("\n %d", i);
    //     for (int k = 4; k > (i / 2) + 0.5; k--)
    //     {
    //         printf(" ");
    //     }

    //     for (int j = 0; j < i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    //     counter++;
    // }

    for (int i = 1; i <= 5; i++)
    {
        for (int k = 4; k >= i; k--)
        {
            printf(" ");
        }

        for (int j = 1; j < (i + i); j++)
        {
            printf("*");
        }
        printf("\n");
        counter++;
    }
}