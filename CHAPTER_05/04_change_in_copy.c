#include<stdio.h>
void price(float value);
int main()
{
    float value;
    value = 100.0;
    price(value);
    printf("The actual price : %f", value);

    return 0;
}

void price(float value)
{
    value = value + (0.18*value);
    printf("The final price : %f\n", value);
}