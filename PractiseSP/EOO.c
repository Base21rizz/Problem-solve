#include<stdio.h>
#include<stdbool.h>
bool eoo(int a)
{
    if (a%2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    bool x = eoo(a);
    if (x == 1)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}