#include<stdio.h>
void square(int n);
int main()
{
    int n;
    printf("n : ");
    scanf("%d", &n);

    printf("Number : %d\n", n);
    square(n);

    return 0;
}

void square(int n)    // CALL  BY  VALUE.
{
    n = n * n;
    printf("Square : %d\n", n);
}