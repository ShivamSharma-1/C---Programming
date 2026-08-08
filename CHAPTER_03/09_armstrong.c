#include <stdio.h>

int main()
{
    int num;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);


    // here 'a' is thousand place number and 'b' is a humdred place number and 'c' is a tens place number and 'd' is a ones place number.
    int a = num / 1000;
    int b = (num / 100) % 10;
    int c = (num / 10) % 10;
    int d = num % 10;

    int sum = a*a*a + b*b*b + c*c*c d*d*d;

    if (sum == num)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}