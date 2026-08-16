#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("hello.c", "r");

    int n;
    while((fscanf(fptr, "%d", &n)) == 1)
    {
        printf("INTEGER : %d\n", n);
    }

    fclose(fptr);

    return 0;
}