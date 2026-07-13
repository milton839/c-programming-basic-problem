#include <stdio.h>

int triangle_star(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

int reverse_triangle_star(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
int main()
{
    int number = 6;

    // triangle_star(number);
    reverse_triangle_star(number);
    return 0;
}