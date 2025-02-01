#include<stdio.h>
int main()
{
    long long int n,ans;
    scanf("%lld",&n);
    if (n%2 == 0)
    {
        ans=n/2;
    }
    else
    {
        ans=-((1+n)/2);
    }
    printf("%lld",ans);
    return 0;
}