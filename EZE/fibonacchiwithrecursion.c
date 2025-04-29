#include <stdio.h>
int fibonacci(int n,int x,int y)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        printf("%d ", x);
        fibonacci(n - 1, y, x + y);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    fibonacci(n,0,1);
    return 0;
}
