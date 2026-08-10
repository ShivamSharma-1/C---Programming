#include<stdio.h>
float percent(float physics, float chemistry, float math);
int main()
{
    float physics;
    printf("Physics Marks : ");
    scanf("%f", &physics);

    float chemistry;
    printf("Chemistry Marks : ");
    scanf("%f", &chemistry);

    float math;
    printf("Math Marks : ");
    scanf("%f", &math);

    printf("Total Percentage : %f\n", percent(physics, chemistry, math));
    return 0;

}
float percent(float physics, float chemistry, float math)
{
    return ((physics + chemistry + math) / 300 ) * 100;
}