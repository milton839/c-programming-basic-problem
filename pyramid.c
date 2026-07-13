#include <stdio.h>

void right_half_pyramid_star(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void reverse_right_half_pyramid_star(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n-i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}
int main()
{
    int number = 6;
    // right_half_pyramid_star(number);
    reverse_right_half_pyramid_star(number);
    return 0;
}