#include<stdio.h>

int main() {
    for (int i = 1; i <= 10; i++)
    {
        int factorial = 1;
        for (int j = 1; j <= i; j++)
        {
            factorial *= j;
        }
        printf("Factorial of %d = %d\n", i, factorial);
    }
    
    return 0;
}