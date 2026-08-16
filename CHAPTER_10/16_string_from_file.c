#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fptr = fopen("hello.c","r");

    char string[200];
    fgets(string, 200, fptr);

    printf("STRING  FROM  FILE -\n");
    printf("%s", string);

    fclose(fptr);

    return 0;
}