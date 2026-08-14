#include <stdio.h>
#include <string.h>
int main()
{
    char CountName[100];
    printf("Enter Your Name : ");
    fgets(CountName, 100, stdin);

    // CountName[strcspn(CountName, "\n")] = '\0';              // THIS IS CAN BE USED WHEN (-1) YOU DONT HAVE TO WRITE .

    int length = strlen(CountName) - 1;
    printf("The length of your name is : %d", length);

    return 0;
}