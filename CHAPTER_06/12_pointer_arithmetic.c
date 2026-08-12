#include<stdio.h>
int main()
{
    int age = 100;
    int *ptr = &age;
    printf("%u\n", ptr);
    ptr++;                   // POINTER  INCREMENTED .
    printf("%u\n", ptr);
    ptr--;                   // POINTER  DECREMENTED .
    printf("%u\n", ptr);

    return 0;
}