#include <stdio.h>
int my_str_length(char *str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

// Method 1: Using a function to reverse a string in simple way
// void str_Reverse(char *str, int length, char *newString)
// {
//     int i = 0;
//     while (str[i] != '\0')
//     {
//         newString[i] = str[length - 1 - i];
//         i++;
//     }
//     newString[i] = '\0';
//     printf("%s\n", newString);
// }

// Method 2: Static variable use kore return kora
// char *str_Reverse(char *str, int length)
// {
//     static char newString[50];
//     int i = 0;
//     while (str[i] != '\0')
//     {
//         newString[i] = str[length - 1 - i];
//         i++;
//     }
//     newString[i] = '\0';
//     printf("%s\n", newString);
//     return newString;
// }

void str_Reverse(char *str, int left, int right)
{
    if (left >= right)
    {
        return;
    }

    // Swap characters at left and right indices
    char temp = str[left];
    str[left] = str[right];
    str[right] = temp;

    str_Reverse(str, left + 1, right - 1);
}


int main()
{
    //Method 1: Using a function to reverse a string in simple way
    // char str[50] = "Hello, World!";
    // char newString[50];

    // int strLength = my_str_length(str);
    // str_Reverse(str, strLength, newString);

    // printf("Original String: %s\n", str);
    // printf("Reversed String: %s\n", newString);


    //Method 2: Static variable use kore return kora
    // char str[50] = "Hello, World!";

    // int strLength = my_str_length(str);
    // char *strReverse = str_Reverse(str, strLength);

    // printf("Original String: %s\n", str);
    // printf("Reversed String: %s\n", strReverse);

    //Method 3: Recursive way to reverse a string
    char str[50] = "Hello, World!";

    printf("Original String: %s\n", str);
    int strLength = my_str_length(str);
    str_Reverse(str, 0, strLength - 1);

    printf("Reversed String: %s\n", str);
    return 0;
}