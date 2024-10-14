#include <stdio.h>

void main()
{

    // // initialization

    // while (condition)
    // {
    //     // code
    //     // increment / decrement
    // }

    // int i = 1;
    // int result = 0;
    // while (i <= 100)
    // {
    //     result += i;
    //     i++;
    // }

    // printf("Total is: %d", result);

    int isServerRunning = 1;
    int userInput;
    while (isServerRunning != 0)
    {
        printf("Server is listening...");
        printf("Press 0 to stop the server.");
        scanf("%d", &userInput);
        isServerRunning = userInput;
    }
}