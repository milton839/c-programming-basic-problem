#include <stdio.h>

int add(int a, int b){
    return a + b;
}
int main()
{
    int (*fptr)(int, int);
    fptr = add;
    printf("%d\n",fptr(4, 6));
    return 0;
}