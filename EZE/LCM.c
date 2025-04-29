#include<stdio.h>
int gcd(int a,int b)
{
    if(b == 0) return a;
    gcd(b,a%b);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int GCD = gcd(a,b);
    int LCM = (a*b)/GCD;
    printf("%d",LCM);
    return 0;
}