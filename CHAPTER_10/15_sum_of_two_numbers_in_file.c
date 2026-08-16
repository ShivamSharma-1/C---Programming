#include<stdio.h>
int main()
{
    FILE *fptr = fopen("hello.c", "r");

    int a;
    fscanf(fptr, "%d", &a);

    int b;
    fscanf(fptr, "%d", &b);

    fclose(fptr);

    fptr = fopen("hello.c", "a");

    fprintf(fptr, "\nSUM : %d", a+b);

    fclose(fptr);

    return 0;
}