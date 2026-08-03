#include <stdio.h>
#include <string.h>

void htmlParser(char html[])
{
    int in = 0, index = 0;
    int htmlLength = strlen(html);
    for (int i = 0; i < htmlLength; i++)
    {
        if (html[i] == '<')
        {
            in = 1;
        }
        else if (html[i] == '>')
        {
            in = 0;
        }
        else if (in == 0)
        {
            html[index++] = html[i];
        }
    }
    html[index] = '\0';

    // Remove leading and trailing spaces
    while (html[0] == ' ')
    {
        int htmlCurrentLength = strlen(html);
        for (int i = 0; i < htmlCurrentLength; i++)
        {
            html[i] = html[i + 1];
        }
    }

    int htmlCurrentLength = strlen(html);
    while (htmlCurrentLength > 0 && html[htmlCurrentLength - 1] == ' ')
    {
        html[htmlCurrentLength - 1] = '\0';
        htmlCurrentLength--;
    }
}
int main()
{
    char html[] = "<h1>    This is heading - 01   </h1>";
    htmlParser(html);

    printf("After parsing: %s\n", html);
    return 0;
}