#include <stdio.h>

int temp(int a, int b)
{
    int total = sum(a * 2, b * 2);
    return total;
}

int sum(int a, int b)
{
    int total = a + b;
    return total;
}

void main()
{

    int a, b;
    printf("Enter first val:");
    scanf("%d", &a);
    printf("Enter second val:");
    scanf("%d", &b);

    printf("Answer is: %d", temp(a, b));
}
