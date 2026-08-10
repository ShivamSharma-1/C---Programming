#include<stdio.h>
float faren(float celsius);
int main()
{
    float celsius;
    printf("Enter celsius : ");
    scanf("%f", &celsius);

    printf("The temperature in fahrenheit : %f.\n", faren(celsius));
}
float faren(float celsius)
{
    float formula = celsius * (9/5) + 32;
    return formula;
}