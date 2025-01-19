#include<stdio.h>
int main()
{
    int w,out;
    scanf("%d",&w);
    out=w%2;
    if(out==0 && w!=2)
    {
        printf("YES");
    }
    else
    {
     printf("NO");
    }
    return 0;
}
