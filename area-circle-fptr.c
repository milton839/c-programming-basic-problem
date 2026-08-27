#include <stdio.h>
float circleArea(float PI, int r)
{
    return PI * r * r;
}

float area(float (*cb)(float, int), float PI, int r)
{
    return cb(PI, r);
}
int main()
{
    const float PI = 3.1416;
    int r = 7;
    float areaResult = area(circleArea, PI, r);

    printf("%f\n", areaResult);
    return 0;
}