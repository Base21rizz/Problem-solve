#include<stdio.h>
int main()
{
    long long int n,w,k,b,sum;
    sum=0;
    scanf("%lld %lld %lld",&k,&n,&w);
    for (int i = 1; i  <= w; i++)
    {
        sum=sum+(i*k);
    }
    b=sum-n;
    if (b>0)
    {
        printf("%lld",b);
    }
    else
    {
        printf("0");
    }
    return 0;
}