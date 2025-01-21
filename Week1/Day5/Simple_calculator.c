#include<stdio.h>
int main()
{
    long long int x,y,sum,mult,sub;
    scanf("%lld %lld",&x,&y);
    sum=x+y;
    mult=x*y;
    sub=x-y;
    printf("%lld + %lld = %lld\n",x,y,sum);
    printf("%lld * %lld = %lld\n",x,y,mult);
    printf("%lld - %lld = %lld\n",x,y,sub);
    return 0;
}