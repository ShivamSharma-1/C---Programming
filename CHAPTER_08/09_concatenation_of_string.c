#include<stdio.h>
#include<string.h>
int main()
{
    char firstletter[100];
    printf("Enter the first letter : ");
    fgets(firstletter, 100, stdin);

    firstletter[strcspn(firstletter, "\n")] = '\0';

    char secondletter[50];
    printf("Enter the second letter : ");
    fgets(secondletter, 50, stdin);

    printf("\n");

    strcat(firstletter, secondletter);
    puts(firstletter);

    return 0;
}