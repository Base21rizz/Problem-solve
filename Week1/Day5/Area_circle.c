#include<stdio.h>
int main()
{
    double pi,r,area;
    scanf("%lf",&r);
    pi=3.141592653;
    area=pi*r*r;
    printf("%.9lf", area);
}