#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    {
        if(b>c)
        {
            printf("%d",c);
        }
        else
        {
            printf("%d",b);
        }
        printf(" %d",a);
    }
    else if(a>b&&a<c)
    {
        printf("%d %d",b,c);
    }
    else if(a<b&&a>c)
    {
        printf("%d %d",c,b);
    }
    else if(a<b&&a<c)
    {
        printf("%d",a);
        if(b>c)
        {
            printf(" %d",b);
        }
        else
        {
            printf(" %d",c);
        }
    }
    return 0;
}
