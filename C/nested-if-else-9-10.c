#include <stdio.h>

void main()
{

    // if (condition_)
    // {
    //     if (condition_1)
    //     {
    //         // code
    //     }
    //     else
    //     {
    //         // code
    //     }
    // }
    // else
    // {
    //     code
    // }

    // if age <3 then Free ticket
    // if age >3 and age<8 then Half ticket

    // if age> 8 and status=="F" then full ticket -10rs
    // if age> 8 and status=="S" then full ticket -15rs
    // if age> 8 and status=="M" then full ticket +10rs
    // if age> 8 then full ticket

    int age = 18;
    char status = 'S';
    int ticket = 100;

    // if (age < 3)
    // {
    //     printf("Free ticket: %d", ticket - 100);
    // }
    // else if (age < 8)
    // {
    //     printf("Half price: %d", ticket / 2);
    // }
    // else if (age >= 8 && status == 'F')
    // {
    //     printf("Ticket price - 10rs: %d", ticket - 10);
    // }
    // else if (age >= 8 && status == 'S')
    // {
    //     printf("Ticket price - 15rs: %d", ticket - 15);
    // }
    // else if (age >= 8 && status == 'M')
    // {
    //     printf("Ticket price + 10rs: %d", ticket + 10);
    // }
    // else
    // {
    //     printf("Full ticket: %d", ticket);
    // }

    if (age < 8)
    {
        if (age < 3)
        {
            printf("Free ticket: %d", ticket - 100);
        }
        else
        {
            printf("Half price: %d", ticket / 2);
        }
    }
    else
    {
        if (status == 'F')
        {
            printf("Ticket price - 10rs: %d", ticket - 10);
        }
        else if (status == 'S')
        {
            printf("Ticket price - 15rs: %d", ticket - 15);
        }
        else if (status == 'M')
        {
            printf("Ticket price + 10rs: %d", ticket + 10);
        }
        else
        {
            printf("Full ticket: %d", ticket);
        }
    }
}