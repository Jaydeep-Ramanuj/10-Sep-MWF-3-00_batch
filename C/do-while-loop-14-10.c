#include <stdio.h>

void main()
{

    // initialization

    // do{
    // code
    // increment / decrement
    // }while (condition)

    // int i = 0;
    // int userResponse = 0;
    // do
    // {
    //     printf("\nRunning");
    //     printf("\nPress 0 to stop, press anything else to continue:  ");
    //     scanf("%d", &userResponse);
    // } while (userResponse != 0);

    int ch;

    do
    {
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Exit");
        printf("\nEnter your choice here: ");
        scanf("%d", &ch);
    } while (ch != 5);
}