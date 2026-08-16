#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Hello.c", "r");

    if(fptr == NULL)
    {
        printf("Hello.c named file dosen't exist in the directory.\n");
    }
    else
    {
        fclose(fptr);
    }

    return 0;
}