#include <stdio.h>
#include <string.h>

typedef struct cmputer_science_engineering_student
{
    char name[50];
    int roll;
    float cgpa;
} cseS ;

int main ()
{
    cseS s1 = {"SHIVAM SHARMA", 9465, 10};

    printf("STUDENT  INFORMATION -\n");
    printf("Name : %s\n", s1.name);
    printf("Roll number : %d\n", s1.roll);
    printf("CGPA : %f\n", s1.cgpa);

    return 0;
}