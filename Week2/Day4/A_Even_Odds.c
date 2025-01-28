#include<stdio.h>
int main()
{
    long long int n,k,half,answer;
    scanf("%lld",&n);
    scanf("%lld",&k);
    half=(n+1)/2;

    if (half < k)
    {
        k = k - half;
        answer=k*2;
        printf("%lld",answer);
    } 
    else
    {
        answer=(k*2)-1;
        printf("%lld",answer);
    }
    return 0;
}