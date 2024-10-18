#include <stdio.h>

float sum(float, float);
float sub(float, float);
float mul(float, float);
float div(float, float);
int mod(int, int);

void main()
{

    float num1, num2;
    int choice;

    do
    {

        printf("\n");
        printf("\n=== WELCOME ===");
        printf("\nEnter number 1:");
        scanf("%f", &num1);
        printf("Enter number 2:");
        scanf("%f", &num2);

        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Modulo");
        printf("\n6. Exit");
        printf("\nChoose your operation from above:");

        scanf("%d", &choice);

        if (choice == 6)
        {
            printf("Thank you");
            break;
        }

        switch (choice)
        {
        case 1:
            printf("Sum of %.2f and %.2f is: %.2f", num1, num2, sum(num1, num2));
            break;
        case 2:
            printf("\nSub of %.2f and %.2f is: %.2f", num1, num2, sub(num1, num2));
            break;
        case 3:
            printf("\nMul of %.2f and %.2f is: %.2f", num1, num2, mul(num1, num2));
            break;
        case 4:
            printf("\nDiv of %.2f and %.2f is: %.2f", num1, num2, div(num1, num2));
            break;
        case 5:
            printf("\nMod of %.2f and %.2f is: %d", num1, num2, mod(num1, num2));
            break;
        default:
            printf("Wrong input");
            break;
        }

    } while (1);
}

float sum(float num1, float num2)
{
    return num1 + num2;
}
float sub(float num1, float num2)
{
    return num1 - num2;
}
float mul(float num1, float num2)
{
    return num1 * num2;
}
float div(float num1, float num2)
{
    return num1 / num2;
}
int mod(int num1, int num2)
{
    return num1 % num2;
}
