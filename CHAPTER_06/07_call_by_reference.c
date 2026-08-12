#include <stdio.h>
void square(int n);
void newsq(int *n);
int main()
{
    int n;
    printf("n : ");
    scanf("%d", &n);

    printf("Number : %d\n", n);
    square(n);

    newsq(&n);
    printf("Updated number : %d", n);
    
    return 0;
}

void square(int n)   // CALL  BY  VALUE .
{
    n = n * n;
    printf("Square : %d\n", n);
}

void newsq(int *n)   // CALL  BY  REFERENCE .
{
    *n = (*n) * (*n);
    printf("New square %d\n", *n);
}