#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("hello.c", "r");

    int n;
    fscanf(fptr, "%d", &n);
    printf("INTEGER : %d\n", n);

    fscanf(fptr, "%d", &n);
    printf("INTEGER : %d\n", n);

    fscanf(fptr, "%d", &n);
    printf("INTEGER : %d\n", n);

    fscanf(fptr, "%d", &n);
    printf("INTEGER : %d\n", n);

    fscanf(fptr, "%d", &n);
    printf("INTEGER : %d\n", n);

    fclose(fptr);

    return 0;
}