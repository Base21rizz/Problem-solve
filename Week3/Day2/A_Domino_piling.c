#include<stdio.h>
int main()
{
    int m,n,a_rect,a_domino,ans;
    a_domino = 2;
    scanf("%d %d",&m,&n);
    a_rect = m*n;
    ans = a_rect/a_domino;
    printf("%d",ans);
    return 0;
}