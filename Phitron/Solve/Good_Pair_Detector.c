#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if ((arr[i] % 2 == 0 && arr[j] % 2 != 0) || (arr[i] % 2 != 0 && arr[j] % 2 == 0))
            {
                count++;
            }
        }
    }

    printf("%d", count);
    return 0;
}