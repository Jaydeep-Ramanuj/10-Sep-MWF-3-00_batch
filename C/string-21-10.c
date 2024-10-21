#include <stdio.h>
#include <string.h>

void main()
{

    // String, it is sequence of characters enclosed in single bracket
    // To make it in C, we use array of Characters

    // String declaration
    // char string_name[string_size];

    // String initialization

    char name[10] = "Something";

    // Array of string
    // char names[5][10] = {"Jay", "Ajay", "Sanjay", "Vijay", "Vinay"};
    // printf("%s", name);

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("\n%s", names[i]);
    // }

    // printf("%d", strlen(name));
    // // strrev(name);
    // printf("\n%s", name);

    // char newString[10];
    // printf("\nBefore copy");
    // printf("\n%s", newString);
    // strcpy(newString, name);
    // printf("\nAfter copy");
    // printf("\n%s", newString);

    // printf("\n%s", strupr(newString));
    // printf("\n%s", strlwr(newString));

    // char inpString[10];
    // printf("Enter your string:");
    // // scanf("%s", &inpString); // When getting string from user using scanf function it will not accept space separated strings
    // gets(inpString); // When getting string from user using gets function it will accept space separated strings

    // puts(inpString);
    // printf("%s", inpString); // To prints string use %s

    char tempString[50] = "Something is awesome";

    // char subString[20];
    // strncpy(subString, tempString, 11);

    // printf("%s", subString);

    printf("%s", strtok(tempString, " "));
}