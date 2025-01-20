#include<stdio.h>
int main()
{
    int t,a,b,m;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&a,&b);
        if(a%b!=0)
        {
            m=a%b;
            a=b-m;
            printf("%d \n",a);
        }
        else
        {
            printf("0 \n");
        }
    }
    return 0;
}
