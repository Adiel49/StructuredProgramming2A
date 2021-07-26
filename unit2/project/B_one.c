/* Design a C program that asks for a username and its years old. Then, you will need to 
check if the user has enough years old to keep in the program. 
-If the user is less than 18 years old show a warning message.
-Otherwise, you will show a welcome message. */
#include <stdio.h>

int main()
{
    char name[40];
    int age;

    printf("What is your name?... ");
    scanf("%s", name);
    printf("What is your age?... ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Welcome %s \n", name);
    }
    else
    {
        printf("Sorry %s, you can't access \n", name);
    }
    return 0;
}