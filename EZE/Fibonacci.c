#include <stdio.h>
int main()
{
    int sum, n;
    scanf("%d", &n);
    int temp,x = 0, y = 1;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",x);
        temp = x+y;
        x = y;
        y = temp;
    }
    return 0;
}