#include <stdio.h>

void sieve(int n)
{
    int isPrime[n + 1];

    // Initially sobai ke prime dhora hocche
    for (int i = 0; i <= n; i++)
        isPrime[i] = 1;

    isPrime[0] = isPrime[1] = 0;

    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i] == 1)
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }

    // print primes
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i] == 1)
            printf("%d ", i);
    }
}

int main()
{
    sieve(50);
    return 0;
}