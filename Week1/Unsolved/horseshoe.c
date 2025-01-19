#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a==b&&a==c&&a!=d)
    {
        printf("2");
    }
    else if(a==b&&a!=c&&a!=d)
    {
        if(c!=d)
        {
            printf("1");
        }
        else
        {
            printf("2");
        }
    }
    else if(a!=b&&a!=c&&a!=d)
    {
        if(b==c&&b!=d)
        {
            printf("1");
        }
        else if(b!=c&&b==d)
        {
            printf("1");
        }
        else
        {
            printf("2");
        }
    }
    else
    {
        printf("1");
    }
    return 0;
}
