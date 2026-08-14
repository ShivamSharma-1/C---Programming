#include <stdio.h>
#include <string.h>
void salting(char password[]);
int main()
{
    char password[100];
    printf("Enter Your Password : ");
    fgets(password, 100, stdin);
    password[strcspn(password, "\n")] = '\0';

    printf("\n");

    salting(password);

    return 0;
}
void salting(char password[])
{
    char salt[] = "123";
    char newpassword[200];

    strcpy(newpassword, password);
    strcat(newpassword, salt);
    printf("NEW PASSWORD : ");
    puts(newpassword);
}