#include <stdio.h>
int main()
{
    int number = 6;

    for (int  i = 0; i < number; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}