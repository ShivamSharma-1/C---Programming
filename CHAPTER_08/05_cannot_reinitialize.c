#include <stdio.h>
int main()
{
    char strcanchange[] = "SHIVAM SHARMA";    // CANNOT  BE  REINITIALIZED .
    puts(strcanchange);
    /*
        strcanchange = "ANJALI SHARMA";          // IT  THROWS  THE  ERROR .
        puts(strcanchange);
    */
    
    return 0;
}