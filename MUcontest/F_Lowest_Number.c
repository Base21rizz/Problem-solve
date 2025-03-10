#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int minnum=arr[1],minpos=1;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i]<minnum)
        {
            minnum = arr[i];
            minpos = i;
        }
    }
    printf("%d %d",minnum,minpos);
    return 0;
}