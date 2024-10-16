#include <stdio.h>

void main()
{
    // a
    // bc
    // def
    // ghij
    // klmno

    // int counter = 65; for capital
    int counter = 97; // for small

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", counter);
            counter++;
        }
        printf("\n");
    }
}