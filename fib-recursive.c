#include <stdio.h>

int fib_recursive(int n)
{
    if (n == 1 || n == 2)
        return n - 1;
    else
    {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}

int iterative_fib(int n)
{
    int a = 0;
    int b = 1;
    
    for (int i = 1; i < n; i++)
    {
        b = a + b;
        printf("%d ", a);
        a = b - a;
    }

    return a;
}
int main()
{
    int number = 10;
    for (int i = 1; i <= number; i++)
    {
        printf("%d ",fib_recursive(i));
    }
    printf("\n");
    
    printf("Iterative Fibonacci of %d is %d\n", number, iterative_fib(number));
    return 0;
}