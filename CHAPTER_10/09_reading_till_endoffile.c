#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("hello.c", "r");

    int ch;
    while((ch = fgetc(fptr)) != EOF)
    {
        printf("Character : %c\n", ch);
    }

    fclose(fptr);

    return 0;
}