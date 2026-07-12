#include <stdio.h>
#include <math.h>

int isPrime(int number) // O(n)
{
    if (number <= 1)
        return 0; // Not prime
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}

int isPrimeEfficient1(int number) // O(√n)
{
    if (number <= 1)
        return 0; // Not prime
    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}

int isPrimeEfficient2(int number) // O(√n / 2)
{
    if (number == 1)
        return 0; // Not prime
    if (number == 2)
        return 1; // Prime
    if (number % 2 == 0)
        return 0; // Not prime and even number gula check ekhane bad jabe
    for (int i = 3; i <= sqrt(number); i += 2)
    {
        if (number % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}

int isPrimeBest(int number) // O(√n / 3)
{
    if (number <= 1)
        return 0;
    if (number <= 3)
        return 1;

    if (number % 2 == 0 || number % 3 == 0)
        return 0;

    for (int i = 5; i * i <= number; i += 6)
    {
        if (number % i == 0 || number % (i + 2) == 0)
            return 0;
    }

    return 1;
}

int main()
{
    // for single number check best way isPrimeBest function use kora jay jar complexity O(√n / 3) 
    // Multiple or range of number check korte Sieve er algorithm use kora best
    
    int number = 15;
    int result = isPrime(number);
    if (result == 1)
    {
        printf("%d is a prime number.\n", number);
    }
    else
    {
        printf("%d is not a prime number.\n", number);
    }
    return 0;
}