#include<stdio.h>
#include<string.h>

struct student
{
    char name[100];
    int roll_no;
    float cgpa;
};

int main()
{
    struct student s1;
    strcpy(s1.name,"SHIVAM SHARMA");
    s1.roll_no = 9465;
    s1.cgpa = 9.9;

    printf("Name : %s\n", s1.name);
    printf("Roll number : %d\n", s1.roll_no);
    printf("CGPA : %f\n",s1.cgpa);

    return 0;
}