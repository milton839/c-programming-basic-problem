#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    

    // ***** Reading a file *****
    // char str[34];
    // ptr = fopen("myfile.txt", "r");
    // fscanf(ptr, "%s", str);
    // printf("The content of this file has %s\n", str);

    // ***** Writing a file *****
    char str[64] = "Writing some text in this file. Add some text for append ";
    ptr = fopen("myfile.txt", "a");
    fprintf(ptr, "%s", str);
    return 0;
}