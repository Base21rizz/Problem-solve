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

    int foundVal = 0;
    int prev = -1;
    for (int i = 0; i < n; i++)
    {
        if (prev != arr[i] && foundVal == arr[i])
            foundVal++;
        prev = arr[i];
    }

    printf("%d", foundVal);
    return 0;
}