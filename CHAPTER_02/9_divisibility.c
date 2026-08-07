#include <stdio.h>
int main()
{
   int n;
   printf("What's n? \n");
   scanf("%d", &n);

   // using modular operater to find remainder if reminder is equal to 0 this means divisible by 2
   printf("%d", n % 2 == 0);
    return 0;
}