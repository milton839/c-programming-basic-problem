#include <stdio.h>
#include <string.h>

void string_reverse(char str[]){
    printf("Original string: %s\n", str);
    int length = strlen(str);
    for(int i = 0; i < length/ 2; i++){
        char tmp = str[i];
        str[i] = str[length - i -1];
        str[length - i - 1] = tmp;
    }
    printf("Reversed string: %s\n", str);
}
int main()
{
    char str[30] = "Milton Biswas";
    // Basic string reverse logic
    string_reverse(str);

    //Library function to reverse string
    char str1[30] = "Hello World";
    printf("Original string: %s\n", str1);
    // strrev(str1); // kaj korbe na because strrev() is not a standard C function and may not be available in all compilers.
    // printf("Reversed string: %s\n", str1);
    return 0;
}