#include<stdio.h>
void HW (int times);
int main()
{
    HW(5);
    return 0;
}
void HW(int times)
{
    if(times == 0)
    {return;}
    printf("Hello World :)\n");
    HW(times - 1);
}