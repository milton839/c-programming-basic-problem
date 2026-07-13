#include <stdio.h>

void str_concate(char str1[], char str2[]){
    int i = 0, j = 0;

    while(str1[i] != '\0'){
        i++;
    }
    
    while(str2[j] != '\0'){
        
        str1[i] = str2[j];
        i++;
        j++;
        
    }
    
    str1[i] = '\0';
}
int main()
{
    char str1[30] = "Milton";
    char str2[] = " Biswas";

    str_concate(str1, str2);
    printf("After concatenation: %s\n", str1);

    char a[30] = "Hello";
    char b[] = " World";
    str_concate(a, b);
    printf("After concatenation: %s\n", a);
    return 0;
}