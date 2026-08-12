#include <stdio.h>
void compare(int a, int b, int *large, int *small);
int main()
{
    int x;
    printf("Enter x : ");
    scanf("%d", &x);

    int y;
    printf("Enter y : ");
    scanf("%d", &y);

    int large;
    int small;
    compare(x, y, &large, &small);
    printf("Largest number : %d\nSmaller number : %d\n", large, small);
    return 0;
}

void compare(int a, int b, int *large, int *small)
{
   // a > b ? printf("Largest number : %d\nSmaller number : %d\n", a, b) : printf("Largest number : %d\nSmaller number : %d\n", b, a);

   if(a>b)
   {
        *large = a;
        *small = b;
   }
   else if(b>a)
   {
        *large = b;
        *small = a;
   }
}