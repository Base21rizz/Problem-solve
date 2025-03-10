#include <stdio.h>
int main()
{
    int f1 = 0, f2 = 1, fn = 0;
    int n;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("0");
        return 0;
    }
    else if (n == 1)
    {
        printf("0 ");
        return 0;
    }
    printf("0 1 ");
    for (int i = 2; i < n; i++)
    {
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
        printf("%d ", fn);
    }
    printf("\n");
    return 0;
}