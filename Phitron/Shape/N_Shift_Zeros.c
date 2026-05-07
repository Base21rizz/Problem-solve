#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int temp = 0;
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == 0)
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}