#include <stdio.h>
void dowork(int a, int b, int *sum, int *prod, int *avg);
int main() {
    int x;
    printf("Enter x : ");
    scanf("%d", &x);

    int y;
    printf("Enter y : ");
    scanf("%d", &y);

    int sum, prod, avg;
    dowork(x, y, &sum, &prod, &avg);
    printf("Sum : %d\nProduct : %d\nAverage : %d\n", sum, prod, avg);
    return 0;
}

void dowork(int a, int b, int *sum, int *prod, int *avg) {
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
}