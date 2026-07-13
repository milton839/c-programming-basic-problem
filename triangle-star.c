#include <stdio.h>

void triangle_star(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void reverse_triangle_star(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
int main()
{
    int number = 6;

    // triangle_star(number);
    reverse_triangle_star(number);
    return 0;
}