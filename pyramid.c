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
        for (int j = 0; j < i; j++)
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

void full_pyramid_star(int n){
    for (int i = 0; i < n; i++)
    {
        //Space printing
        for (int j = 0; j < n-i-1; j++)
        {
            printf(" ");
        }
        //Star printing
        for (int j = 0; j < 2*i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}

void reverse_full_pyramid_star(int n){
    for (int i = 0; i < n; i++)
    {
        //Space printing
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        //Star printing
        for (int j = 0; j < 2*(n-i)-1; j++)
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
    // reverse_right_half_pyramid_star(number);
    // full_pyramid_star(number);
    reverse_full_pyramid_star(number);
    return 0;
}