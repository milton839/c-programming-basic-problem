#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    printf("Random number is 0 to 10: %d\n", rand() % 11);
    return 0;
}