#include<stdio.h>
int main()
{
    char name[20];
    printf("Enter Your Name : ");
    scanf("%s", name);

    printf("Welcome :)\n%s\n", name);
    return 0;
}