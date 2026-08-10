#include <stdio.h>
// Function declaration / prototype
void printhello();
int main()
{
    // Function call
    printhello();
    return 0;
}
// Function defination
void printhello()
{
    int n=0;
    printf("num : ");
    scanf("%d", &n);
    
    for(int i=0; i<n; i++)
    {
        printf("Hello\n");
    }
}