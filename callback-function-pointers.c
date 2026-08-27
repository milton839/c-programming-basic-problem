#include <stdio.h>

void greet()
{
    printf("Hello World!\n");
}

int add(int a, int b)
{
    return a + b;
}

int result(void cb(), int cb2(int, int))
{
    cb();
    printf("%d\n", cb2(10, 6));
    return 0;
}
int main()
{

    result(greet, add);
    return 0;
}