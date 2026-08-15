#include <stdio.h>
#include <string.h>

struct studentinfo
{
    char name[50];
    int roll;
    float cgpa;
};

void printinfo(struct studentinfo s[], int n);

int main()
{
    struct studentinfo s[] = 
    {
        {"SHIVAM SHARMA", 9465, 10},
        {"SIDHANT SHARMA", 9466, 9},
        {"ANJALI SHARMA", 9467, 8},
    };
    printinfo(s,3);

    return 0;
}

void printinfo(struct studentinfo s[], int n)           //  CALL  BY  VALUE .
{
    printf("STUDENT  INFORMATION\n");
    for(int i = 0; i < 3; i++)
    {
        printf("STUDENT %d\n", i+1);
        printf("Name : %s\n", s[i].name);
        printf("Roll number : %d\n", s[i].roll);
        printf("CGPA : %f\n", s[i].cgpa);
    }
}