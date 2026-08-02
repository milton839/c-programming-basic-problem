#include <stdio.h>
int string_length(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}
int main()
{
    char str[] = "Milton Biswas";

    int length = string_length(str);
    printf("Length of the string is: %d\n", length);
    return 0;
}