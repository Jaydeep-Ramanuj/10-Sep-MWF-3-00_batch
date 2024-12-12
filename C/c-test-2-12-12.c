#include <stdio.h>

struct person
{
    char name[30];
    char city[30];
    int age;
};

void printPersonInfo(struct person p)
{
    printf("----");
    printf("\nName: %s", p.name);
    printf("\nCity: %s", p.city);
    printf("\nAge: %d", p.age);
}

void main()
{

    struct person p[3];

    for (int i = 0; i < 1; i++)
    {
        printf("--- Person %d ---", i + 1);
        printf("\nEnter name: ");
        scanf("%s", &p[i].name);
        printf("\nEnter city: ");
        scanf("%s", &p[i].city);
        printf("\nEnter age: ");
        scanf("%d", &p[i].age);
    }

    printPersonInfo(p[0]);
}