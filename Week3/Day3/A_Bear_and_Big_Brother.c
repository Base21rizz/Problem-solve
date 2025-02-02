#include<stdio.h>
int main()
{
    int yl,yb,years;
    scanf("%d %d",&yl,&yb);
    years = 0;
    while (yl<yb+1)
    {
        yl*=3;
        yb*=2;
        years++;
    }
    printf("%d",years);
    return 0;
}