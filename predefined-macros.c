#include <stdio.h>

int main()
{
    printf("File name is: %s\n", __FILE__);
    printf("Todays Date is: %s\n", __DATE__);
    printf("Current Time is: %s\n", __TIME__);
    printf("Line Number is: %d\n", __LINE__);
    printf("ANSI is: %d\n", __STDC__);
    return 0;
}