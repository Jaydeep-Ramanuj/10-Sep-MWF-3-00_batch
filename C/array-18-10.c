#include <stdio.h>

void main()
{

    // Array, it is collection of same typed items

    // array declaration
    // data_type array_name[array_size];
    int ids[10];

    // array initialization
    int roll_numbers[5] = {1, 2, 3, 4, 5};

    int phone[5] = {1, 2, 3, 4, 5};

    // array value update

    phone[4] = 6;

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d", phone[i]);
    // }

    int data[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int info[3][3][3] =
        {{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
         {{11, 12, 13}, {14, 15, 16}, {17, 18, 19}},
         {{21, 22, 23}, {24, 25, 26}, {27, 28, 29}}};

    printf("%d", data[1][1]);
    printf("%d", info[2][2][0]);
}