#include<stdio.h>
int main()
{
    char name[100];
    printf("Enter Your Name : ");
    fgets(name, 100, stdin);          // to get the input from user.

    printf("Welcome :)\n%s\n", name);

    return 0;
}