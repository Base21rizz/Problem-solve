#include<stdio.h>
int square(int a)
{
    return a*a;
}
int main()
{
    int a,sqr;
    scanf("%d",&a);
    sqr=square(a);
    printf("%d",sqr);
    return 0;
}