#include <stdio.h>
int main()
{
    char str[] = "Milton Biswas";

    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c\n", str[i]);
    }
    
    return 0;
}