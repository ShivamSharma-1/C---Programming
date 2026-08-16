#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("hello.c", "w");

    fprintf(fptr, "%c", 'H');
    fprintf(fptr, "%c", 'E');
    fprintf(fptr, "%c", 'L');
    fprintf(fptr, "%c", 'L');
    fprintf(fptr, "%c", 'O');

    fclose(fptr);

    return 0;
}