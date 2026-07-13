#include <stdio.h>

void right_half_pyramid_star(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void reverse_right_half_pyramid_star(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void full_pyramid_star(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Space printing
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        // Star printing
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void reverse_full_pyramid_star(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Space printing
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        // Star printing
        for (int j = 0; j < 2 * (n - i) - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

void pyramid_diamond_star(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        // Space printing
        int space_count = i < n ? n - i - 1 : i - n + 1;
        for (int j = 0; j < space_count; j++)
        {
            printf(" ");
        }
        int star_count = i < n ? 2 * i + 1 : 2 * (2 * n - i - 2) + 1;
        for (int j = 0; j < star_count; j++)
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
    // reverse_full_pyramid_star(number);
    pyramid_diamond_star(number);
    return 0;
}