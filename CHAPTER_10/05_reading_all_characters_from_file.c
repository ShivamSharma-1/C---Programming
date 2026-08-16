#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("hello.c", "r");

    char ch;
    while(fscanf(fptr, "%c", &ch) == true)
    {
        printf("Character : %c\n", ch);
    }

    fclose(fptr);

    return 0;
}