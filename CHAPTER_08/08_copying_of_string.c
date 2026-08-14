#include <stdio.h>
#include <string.h>
int main()
{
    char oldstr[100];
    printf("Enter old string : ");
    fgets(oldstr, 100, stdin);

    char newstr[100];
    printf("Enter new string : ");
    fgets(newstr, 100, stdin);

    printf("\n");

    strcpy(newstr, oldstr);

    printf("Updated New string : ");
    puts(newstr);

    printf("Updated Old string : ");
    puts(oldstr);
    
    return 0;
}