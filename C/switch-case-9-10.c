#include <stdio.h>

void main()
{

    int day = 2;

    // syntax

    // switch(key){
    //     case 1:
    //         code, this will run when case 1 is true
    //         break;
    //     case 2:
    //         code, this will run when case 2 is true
    //         break;
    //     case 3:
    //         code, this will run when case 3 is true
    //         break;
    //         |
    //         |
    //         |
    //         default:
    //         code, this will run only if all cases are false
    // }

    switch (day)
    {
    case 0:
        printf("Sunday");
        break;
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    default:
        printf("You have entered wrong input");
    }
}