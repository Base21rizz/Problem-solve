#include <stdio.h>
#include <math.h>

int main()
{
    double pi = 3.14159265358979323846;
    double theta,ratio;
    theta = 45.0;
    ratio = 1.0 / sin(theta * pi / 180.0);
    printf("The ratio a/lambda = %.4f\n", ratio);
    return 0;
}