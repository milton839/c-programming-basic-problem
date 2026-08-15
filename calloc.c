// Dynamic memory allocation functions for C11 standard
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;

    int n;
    printf("Enter the number of element of array: ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int)); // dynamically allocate memory using malloc

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d th element is: %d\n", i + 1, ptr[i]);
    }
    return 0;
}
