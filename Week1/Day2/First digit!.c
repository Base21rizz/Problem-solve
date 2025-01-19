#include<stdio.h>
int main()
{
    int a,temp;
    scanf("%d",&a);
    temp=a/1000;
    if(temp%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}
