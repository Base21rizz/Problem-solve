#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr1[n], arr2[n], revArr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        revArr[i] = arr2[j];
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        revArr[i] += arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", revArr[i]);
    }
    return 0;
}