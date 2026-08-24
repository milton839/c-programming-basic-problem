#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    //atoi: ascii to integer (atoi er maddhome string to number e convert)
    int sum = atoi(argv[1]) + atoi(argv[2]);
    int multiplication = atoi(argv[1]) * atoi(argv[2]);
    printf("%d\n", sum);
    printf("%d\n", multiplication);
    return 0;
}