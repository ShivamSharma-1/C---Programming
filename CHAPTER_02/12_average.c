#include <stdio.h>
int main()
{
    int x;
    printf("What's x : ");
    scanf("%d", &x);

    int y;
    printf("What's y : ");
    scanf("%d", &y);


    /* we use float here because if we do calculation with int and float data types then,
     the final answer will also come with float data type which tells the accuracy and uses large bit than int data type,
     as float data type is bigger in size than int.
    */
    float z;
    printf("What's z : ");
    scanf("%f", &z);


    // using float data type as the final answer comes with accuracy
    printf("%f \n", (x+y+z)/3);
    return 0;
}