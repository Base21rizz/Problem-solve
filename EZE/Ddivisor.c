#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n%i == 0)
        {
            printf("%d ",i);
            count++;
        }
    }
    printf("\n");
    printf("%d",count);
    return 0;
}