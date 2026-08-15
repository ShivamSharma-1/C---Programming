#include <stdio.h>

struct complex
{
    int real;
    int img;
};

int main()
{
    struct complex number = {2, 5};
    struct complex *ptr = &number;

    printf("COMPLEX  NUMBER : (%d + %di)\n", ptr->real, ptr->img);

    return 0;
}