#include <stdio.h>
#include <string.h>

struct vector
{
    int x;
    int y;
};

struct vector add(struct vector v1, struct vector v2);

int main()
{
    struct vector v1 = {12, 12};
    struct vector v2 = {18, 18};

    struct vector calcsum = add(v1, v2);
    printf("Sum of vectors :(%d, %d)\n", calcsum.x, calcsum.y);

    return 0;
}

struct vector add(struct vector v1, struct vector v2)
{
    struct vector sum = {0};
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    return sum;
}