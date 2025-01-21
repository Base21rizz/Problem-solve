#include<stdio.h>
int main()
{
    int intgr;
    long long int llint;
    char chrctr;
    float flt;
    double dbl;
    scanf("%d %lld %c %f %lf",&intgr,&llint,&chrctr,&flt,&dbl);
    printf("%d\n",intgr);
    printf("%lld\n",llint);
    printf("%c\n",chrctr);
    printf("%f\n",flt);
    printf("%lf",dbl);
    return 0;
}