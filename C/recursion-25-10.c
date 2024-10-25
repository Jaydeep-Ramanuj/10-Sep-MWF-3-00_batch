#include <stdio.h>

int fact(int num)
{
    if (num > 1)
    {
        num *= fact(num - 1);
        printf("\n%d", num);
        return num;
    }
    else
    {
        return 1;
    }
}

void main()
{
    int num;

    printf("Enter your number: ");
    scanf("%d", &num);

    // for (int i = num; i > 0; i--)
    // {
    //     result *= i;
    // }

    // printf("Factorial of Given number is: %d", result);

    printf("Factorial of Given number is: %d", fact(num));
}