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
    char str[30] = "Milton";
    // Basic string reverse logic
    string_reverse(str);
    return 0;
}