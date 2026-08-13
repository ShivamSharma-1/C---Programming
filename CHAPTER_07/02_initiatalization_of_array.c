#include<stdio.h>
int main()
{
    float price[] = {100.0, 200.0, 300.0};   // INITIATALIZATION OF ARRAY .

    // TOTAL PRICE VALUE OF EACH ITEMS .
    printf("Total price of 1 : %f\n", price[0] + (price[0] * 0.18));
    printf("Total price of 2 : %f\n", price[1] + (price[1] * 0.18));
    printf("Total price of 3 : %f\n", price[2] + (price[2] * 0.18));

    // METHOD  TO  CHECK  MEMORY  RESERVED .
    printf("Size of array = %zu bytes\n", sizeof(price));
    printf("Size of one float = %zu bytes\n", sizeof(float));
    printf("Number of elements = %zu\n", sizeof(price) / sizeof(float));

    // METHOD  TO  CHECK  ADDRESS  OF  EACH  PRICE[] .
    printf("%p\n", (void*)&price[0]);
    printf("%p\n", (void*)&price[1]);
    printf("%p\n", (void*)&price[2]);

    return 0;
}