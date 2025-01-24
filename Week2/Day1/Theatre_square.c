#include<stdio.h>
int main()
{
    long long int n,m,a,all,als,fsr;
    scanf("%lld %lld %lld",&n,&m,&a);
    all=((n+a)-1)/a;
    als=((m+a)-1)/a;
    fsr=all*als;
    printf("%lld",fsr);
    return 0;
}