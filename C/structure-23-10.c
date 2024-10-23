#include <stdio.h>

struct person
{
  int id;
  char name[20];
  double phone;
  char city[20];
  int marks;
};

void main()
{

  struct person p1;
  // p1.id = 1;

  // printf("\nEnter your name:");
  // gets(p1.name);
  // printf("\nEnter your phone:");
  // scanf("%d", &p1.phone);
  // printf("\nEnter your city:");
  // scanf(" %s", &p1.city);
  // printf("\nEnter your marks:");
  // scanf("%d", &p1.marks);

  // printf("\nId: %d", p1.id);
  // printf("\nName: %s", p1.name);
  // printf("\nPhone: %lf", p1.phone);
  // printf("\nCity: %s", p1.city);
  // printf("\nMarks: %d", p1.marks);

  // ****************************

  int num;
  printf("Enter number of people:");
  scanf("%d", &num);

  struct person people[num];

  for (int i = 0; i < num; i++)
  {
    people[i].id = i + 1;
    printf("\n--- Person %d ---", i + 1);
    printf("\nEnter your name:");
    scanf(" %s", &people[i].name);
    printf("\nEnter your phone:");
    scanf("%lf", &people[i].phone);
    printf("\nEnter your city:");
    scanf(" %s", &people[i].city);
    printf("\nEnter your marks:");
    scanf("%d", &people[i].marks);
  }

  for (int i = 0; i < num; i++)
  {
    printf("\n--- Person %d ---", i + 1);
    printf("\nId: %d", people[i].id);
    printf("\nName: %s", people[i].name);
    printf("\nPhone: %.1lf", people[i].phone);
    printf("\nCity: %s", people[i].city);
    printf("\nMarks: %d", people[i].marks);
  }
}