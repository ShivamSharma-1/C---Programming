#include <stdio.h>
int main()
{
    int marks;
    printf("Total marks(0-100) : ");
    scanf("%d", &marks);

    if (marks <= 33)
    { 
        printf("Student is failed \n");
    }
    else
    {
        printf("Student is passed \n");
    }

    return 0;
}