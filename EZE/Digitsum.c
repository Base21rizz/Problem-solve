#include<stdio.h>
int main()
{
    int n,digitsum = 0;
    scanf("%d",&n);
    int temp = n;
    while (temp!=0)
    {
        digitsum += temp%10;
        temp = temp/10;
    }
    printf("%d",digitsum);
    return 0;
}