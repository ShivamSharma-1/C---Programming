#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int roll;
    float cgpa;
};

int main()
{
    struct student s1 = {"Shivam Sharma", 9465, 10.0};
    struct student *ptr = &s1;
    printf("Student name : %s\n", (*ptr).name);          // USING  POINTER  OPERATOR.
    printf("Student roll number : %d\n", ptr->roll);    //  USING  ARROW   OPERATOR.
    printf("Student CGPA : %f\n", ptr->cgpa);          //   USING  ARROW   OPERATOR.#

    return 0;
    
}