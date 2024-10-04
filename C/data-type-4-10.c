#include <stdio.h>

void main()
{

    // Data type, it defines type of a data. It also defines range of data that that variable can hold'

    // int, it is used to store whole numbers, %d, 2 or 4 byte
    // float, it is used to store floating point numbers (decimal values), %f / .2f, 4 byte
    // double, it is used to store floating as well as whole numbers, %lf / %.2lf, 8 or 10 byte
    // char, it is used to store single character that is enclosed in single quotation mark , %c, 1 byte
    // void, it is doesn't store data, rather it is used to notify that there is no data, 1 byte

    int num = 10.3;
    printf("%d", num);
    float num1 = 10.3;
    printf("\n%f", num1);
    printf("\n%.2f", num1);
    printf("\n%.1f", num1);
    printf("\n%.0f", num1);
    printf("\n%.8f", num1);

    double num3 = 10;
    printf("\n%.0lf", num3);

    char name = 'jay';
    name = 'b';

    printf("\n%c", name);

    printf("\n%d", sizeof(num));
    printf("\n%d", sizeof(num1));
    printf("\n%d", sizeof(num3));
    printf("\n%d", sizeof(int));
    printf("\n%d", sizeof(char));
    printf("\n%d", sizeof(void));
}