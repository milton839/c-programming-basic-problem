#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    // atoi: ascii to integer (atoi er maddhome string to number e convert)
    //  int sum = atoi(argv[1]) + atoi(argv[2]);
    //  int multiplication = atoi(argv[1]) * atoi(argv[2]);
    //  printf("%d\n", sum);
    //  printf("%d\n", multiplication);

    // cmd thekei manage
    char *operation = argv[1];
    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);

    if (strcmp(operation, "Add") == 0)
    {
        printf("Sum is: %d\n", num1 + num2);
    }
    else if (strcmp(operation, "Multiply") == 0)
    {
        printf("Multiply is: %d\n", num1 * num2);
    }

    return 0;
}