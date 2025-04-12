#include<stdio.h>

int factorial(int a)
{
    int sum = 1;
    for (int i = 1; i <= a; i++)
    {
        sum = sum * i;
    }
    return sum;
}
int main()
{
    int a,sum;
    scanf("%d",&a);
    sum = factorial(a);
    printf("%d",sum);
    return 0;
}