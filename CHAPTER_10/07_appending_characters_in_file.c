#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("hello.c", "a");

    fprintf(fptr, "\n");
    fprintf(fptr, "%c", 'W');
    fprintf(fptr, "%c", 'O');
    fprintf(fptr, "%c", 'R');
    fprintf(fptr, "%c", 'L');
    fprintf(fptr, "%c", 'D');

    fclose(fptr);

    return 0;
}