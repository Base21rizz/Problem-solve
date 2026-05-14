#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    int sumOfMainDia = 0, sumOfSecondaryDia = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                sumOfMainDia += arr[i][j];
            if (i + j == n - 1)
                sumOfSecondaryDia += arr[i][j];
        }
    }
    int ans = sumOfMainDia - sumOfSecondaryDia;
    ans = fabs(ans);
    printf("%d", ans);
}