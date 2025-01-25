#include<stdio.h>
int main()
{
    long long int n,k,sum;
    scanf("%lld %lld",&n,&k);
    sum=0;
    while(sum!=k)
    {
        if (n%10==0)
        {
            n=n/10;
            sum=sum+1;
        }
        else
        {
            n=n-1;
            sum=sum+1;
        }
    }
    printf("%d",n);
    return 0;
}
