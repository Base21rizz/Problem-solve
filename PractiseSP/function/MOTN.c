#include<stdio.h>

int motn(int a,int b, int c)
{
    if (a>=b && a>=c) return a;
    else if (b>=a && b>=c) return b;
    else return c;
}

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d",motn(a,b,c));
    return 0;
}