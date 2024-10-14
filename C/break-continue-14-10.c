#include <stdio.h>

void main()
{

    // break, it is used to break (stop) the loop. Once occurred it will jump directly after that looping block.
    // continue, it is used when we want to continue (skip) current iteration, it will skip the current iteration but subsequent iteration will keep running as usual

    // Don't write anything after switch or continue, because it is 'deadcode' which means it will never run

    // for (int i = 0; i < 1000; i++)
    // {
    //     if (i == 564)
    //     {
    //         printf("\nFound it");
    //         break;
    //     }
    //     printf("\n%d", i);
    // }

    // printf("\nThis will run after loop completes");

    for (int i = 0; i < 1000; i++)
    {
        if (i > 500 && i < 700)
        {
            continue;
            printf("This will never print");
        }
        else
        {
            printf("\n%d", i);
        }
    }
}