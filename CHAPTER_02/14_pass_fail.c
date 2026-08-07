#include <stdio.h>
int main()
{
    int marks;
    printf("Total marks(0-100) : ");
    scanf("%d", &marks);
   
    marks >= 33 && marks <=100 ? printf("Student is passed \n") : printf("Student is failed \n");
    
    return 0;
}
