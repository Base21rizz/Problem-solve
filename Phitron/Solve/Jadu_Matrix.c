#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1)
            {
                if (arr[i][j] != 1)
                    flag = 0;
            }
            else
            {
                if (arr[i][j] != 0)
                    flag = 0;
            }
        }
    }
    if (flag)
        printf("YES");
    else
        printf("NO");

    return 0;
}