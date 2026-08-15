#include <stdio.h>
#include <string.h>

struct studentinfo
{
    char name[50];
    int roll;
    float cgpa;
};

void printinfo(struct studentinfo s1);

int main()
{
    struct studentinfo s1 = {"SHIVAM SHARMA", 9465, 10};
    printinfo(s1);

    return 0;
}

void printinfo(struct studentinfo s1)           //  CALL  BY  VALUE .
{
    printf("STUDENT  INFORMATION\n");
    printf("Name : %s\n", s1.name);
    printf("Roll number : %d\n", s1.roll);
    printf("CGPA : %f\n", s1.cgpa);
}