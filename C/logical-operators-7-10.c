#include <stdio.h>

void main()
{

    int a = 10;
    int b = 20;

    int condition_1 = a < b;
    int condition_2 = a < 10;

    // AND (&&), it gives true of all conditions are ture

    // 1 1 => 1
    // 1 0 => 0
    // 0 1 => 0
    // 0 0 => 0

    // OR (||), it gives true of any conditions are ture

    // 1 1 => 1
    // 1 0 => 1
    // 0 1 => 1
    // 0 0 => 0

    // NOT (!), it gives true if false, gives false if true
    // 1 => 0
    // 0 => 1

    // printf("%d", condition_1 && condition_2);
    // printf("%d", condition_1 || condition_2);
    printf("%d", !condition_1);
}