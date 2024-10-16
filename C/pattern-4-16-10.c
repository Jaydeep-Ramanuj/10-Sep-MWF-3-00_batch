#include <stdio.h>

void main()
{
    // 1
    // 22
    // 333
    // 4444
    // 55555

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("%d", i + 1);
    //     }
    //     printf("\n");
    // }

    // 1
    // 12
    // 123
    // 1234
    // 12345

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("%d", j + 1);
    //     }
    //     printf("\n");
    // }

    // 1
    // 23
    // 456
    // 78910
    // 1112131415

    int counter = 1;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", counter);
            counter++;
        }
        printf("\n");
    }
}