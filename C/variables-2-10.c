#include <stdio.h>

void main()
{
    // strongly typed, C and C++ are strongly type language, it means we need explicitly define type of every variables

    // variable declaration, it is used to declare that such variable exits
    // syntax

    // data_type variable_name;
    int variable;

    // variable initialization, to give starting value
    //  variable_name= value;
    variable = 30;

    printf("%d", variable);

    // variable defintion, it is used to declare and initialize value to variable
    int num = 10;

    printf("\n--Before update--");
    printf("\n%d", num);

    // variable update, it changes already given value

    num = 20;
    printf("\n--After update--");
    printf("\n%d", num);

    // variable name rules

    // it can't start with digit
    // it can't have spaces
    // it can't have spacial charters, except _
    // it can't be keywords

    // int 1a=10; // Error
    int a1 = 10;

    // char my name="J"; // Error
    char may_name = "j";

    // char j@a = 'some'; // Error
    char j_a = 'J';

    // int int = 10; // Error
    int inta = 10;

    // isuserloggedinwithemailid

    // Naming conventions

    // camelCase
    int isUserLoggedInWithEmailId;

    // PascalCase
    int IsUserLoggedInWithEmailId;

    // kabab-case
    // int is-user-logged-in-with-email-id

    // snake_case
    int is_user_logged_in_with_email_id;
}

// int age=12;
// printf("Raj");
// peintf("%d",age);