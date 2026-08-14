#include <stdio.h>
#include <string.h>

int main()
{
    char compare1[100];
    printf("String 1 : ");
    fgets(compare1, 100, stdin);

    char compare2[100];
    printf("String 2 : ");
    fgets(compare2, 100, stdin);

    int report = strcmp(compare1, compare2);

    if (report > 0)
    {
        for (int i = 0; compare1[i] != '\0' || compare2[i] != '\0'; i++)
        {
            if (compare1[i] != compare2[i])
            {
                printf("'%c' (ASCII %d) is greater than '%c' (ASCII %d)\n",
                       compare1[i], compare1[i],
                       compare2[i], compare2[i]);
                break;
            }
        }
    }
    else if (report < 0)
    {
        for (int i = 0; compare1[i] != '\0' || compare2[i] != '\0'; i++)
        {
            if (compare1[i] != compare2[i])
            {
                printf("'%c' (ASCII %d) is smaller than '%c' (ASCII %d)\n",
                       compare1[i], compare1[i],
                       compare2[i], compare2[i]);
                break;
            }
        }
    }
    else
    {
        printf("Both strings are equal.\n");
    }

    return 0;
}