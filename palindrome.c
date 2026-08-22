#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool checkPalindrome(char *str, int left, int right)
{
    // bool isPalindrome = true;
    while (left < right)
    {
        if (str[left] != str[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main()
{
    char str[] = "maddam";

    int strLength = strlen(str);

    bool isPalindrome = checkPalindrome(str, 0, strLength - 1);
    if (isPalindrome)
    {
        printf("Palindrome!.....\n");
    }
    else{
        printf("Palindrome na!.....\n");
    }
    
    return 0;
}