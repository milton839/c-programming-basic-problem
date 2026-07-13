#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20];
    char str2[] = "Hello World";
int i;
    for (i = 0; str2[i] != '\0'; i++)
    {
        str1[i] = str2[i];
    }
    str1[i] = '\0';
    printf("Copied string: %s\n", str1);
    printf("Str2 = %s\n", str2);

    printf("Copied string using library function: %s\n", strcpy(str1, str2));
    return 0;
}