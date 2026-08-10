#include<stdio.h>
#include<math.h>
void square(int n);
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    square(n);
    return 0;
}
void square(int n)
{
    n = pow(n,2);
    printf("%d\n", n);
}