#include<stdio.h>
int fibonacci(int n)
{
    int x=0,y=1,temp;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",x);
        temp = x+y;
        x = y;
        y = temp;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}