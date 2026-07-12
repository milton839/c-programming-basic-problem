#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    printf("After swapping: a = %d, b = %d\n", *a, *b);
}
int main()
{
    int a = 10, b = 20;

    // swap(a,b); // Call by value
    swap(&a,&b); // call by reference

    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}