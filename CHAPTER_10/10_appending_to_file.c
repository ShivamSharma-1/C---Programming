#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("hello.c", "a");

    fprintf(fptr, "\n");
    fputc('S', fptr);
    fputc('H', fptr);
    fputc('I', fptr);
    fputc('V', fptr);
    fputc('A', fptr);
    fputc('M', fptr);

    fclose(fptr);

    return 0;
}