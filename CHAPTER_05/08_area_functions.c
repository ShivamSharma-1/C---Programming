#include<stdio.h>
#include<math.h>
void square(int side);
void circle(float radius);
void rectangle(int length, int breadth);
int main()
{
    int side;
    float radius;
    int length,breadth;
    square(side);
    circle(radius);
    rectangle(length, breadth);
    return 0;
}

void square(int side)
{
    side;
    printf("Enter side : ");
    scanf("%d", &side);

    printf("The area of square is %d.\n", side * side);
}
void circle(float radius)
{
    radius;
    printf("Enter radius : ");
    scanf("%f", &radius);

    printf("The area of circle is %f.\n", 3.14 * pow(radius,2));
}
void rectangle(int length, int breadth)
{
    length, breadth;
    printf("Enter length : ");
    scanf("%d", &length);
    printf("Enter breadth : ");
    scanf("%d", &breadth);

    printf("The area of rectangle is %d.\n", length * breadth);
}