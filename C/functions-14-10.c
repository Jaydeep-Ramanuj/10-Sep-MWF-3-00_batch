#include <stdio.h>

// function declaration
// return_type function_name(parameter_1_type, parameter_2_type);

void printI(int, int);
int sum(int, int);

void main()
{

    // function call
    // function_name(argument_1, argument_2,..);

    printI(108, 3);
    // printI(1000, 10);
    // printI(200, 1);
    // printI(200, 2);

    int result = sum(45, 10);
    printf("\nResult: %d", result);
}

// function defintion

// return_type function_name(parameter_1, parameter_2, ...)
// {
//     code to execute, which may user passed parameter
// }

void printI(int num, int step)
{
    for (int i = 0; i < num; i += step)
    {
        printf("\n%d", i);
    }
}

int sum(int num1, int num2)
{
    int result = num1 + num2;
    return result;
}