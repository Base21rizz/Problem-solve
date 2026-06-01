#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%1d", &arr[i]);
        sum += arr[i];
    }

    if (sum % 3 == 0)
    {
        printf("YES");
    }
    else
        printf("NO");

    return 0;
}