#include<stdio.h>
#include<stdlib.h>

int main()
{
    float *ptr;
    ptr = (float*)malloc(5*sizeof(int));

    ptr[0] = 100;
    ptr[1] = 200;
    ptr[2] = 300;
    ptr[3] = 400;
    ptr[4] = 500;

    for(int i = 0; i < 5; i++)
    {
        printf("Price of object %d : %.1f\n", i+1, ptr[i] + (ptr[i]*0.18));
    }
}