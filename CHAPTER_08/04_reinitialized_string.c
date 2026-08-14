#include <stdio.h>
int main()
{
    char *strcanchange = "SHIVAM SHARMA";    // CAN  BE  REINITIALIZED .
    puts(strcanchange);
    strcanchange = "ANJALI SHARMA";
    puts(strcanchange);

    return 0;
}