#include<stdio.h>
int main()
{
    int a,b,mod1,mod2;
    scanf("%d %d",&a,&b);
    mod1=b%a;
    mod2=a%b;
    if(mod1==0||mod2==0)
    {
        printf("Multiples");
    }
    else
    {
        printf("No Multiples");
    }
    return 0;
}
