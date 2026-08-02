#include <stdio.h>
#include <string.h>

void htmlParser(char html[])
{
    int in = 0, index = 0;
    int htmlLength = strlen(html);
    for(int i = 0; i< htmlLength; i++){
        if(html[i] == '<'){
            in = 1;
        }
        else if(html[i] == '>'){
            in = 0;
        }
        else if(in == 0){
            html[index++] = html[i];
        }
    }
    html[index] = '\0';

    // Remove leading and trailing spaces
    while(html[0] == ' ') {
        for(int i = 0; i < htmlLength; i++){
            html[i] = html[i+1];
        }
    }

    while(html[strlen(html) - 1] == ' ') {
        html[strlen(html) - 1] = '\0';
    }
}
int main()
{
    char html[] = "<h1>    This is heading - 01   </h1>";
    htmlParser(html);

    printf("After parsing: %s\n", html);
    return 0;
}