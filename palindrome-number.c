#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool checkPalindrome(int number)
{
    int original_number = number;
    int reverse = 0;
    // bool isPalindrome = true;
    while (number != 0)
    {
        reverse = reverse * 10 + number % 10;
        number = number / 10;
    }
    return original_number == reverse;
}
int main()
{
    int number = 1011012;

    bool isPalindrome = checkPalindrome(number);
    if (isPalindrome)
    {
        printf("Palindrome!.....\n");
    }
    else
    {
        printf("Palindrome na!.....\n");
    }

    return 0;
}