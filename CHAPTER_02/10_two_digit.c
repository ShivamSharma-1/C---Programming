#include <stdio.h>
int main()
{
   int n;
   printf("What's n? \n");
   scanf("%d", &n);


    // using && logical operater
    printf("%d \n", n>9 && n<100);
    return 0;
}