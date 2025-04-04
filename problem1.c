#include <stdio.h>
#include <math.h>
int main()
{
    double lambda,theta,d,m;
    double pi = 3.141592653;
    printf("Enter wavelength (in nm): ");
    scanf("%lf", &lambda);

    if (lambda < 380 || lambda > 750)
    {
        printf("Out of the range. Please enter a valid number.\n");
        return 0;
    }

    printf("Enter angle theta (in degrees): ");
    scanf("%lf", &theta);
    printf("Enter d (in micrometers): ");
    scanf("%lf", &d);
    lambda = lambda * 1e-9;
    d = d * 1e-6;
    m = (d * sin(theta * pi / 180.0)) / lambda;
    printf("Order of maxima: %.2f-th order maxima\n", m);
    return 0;
}