#include <stdio.h>
void printB(int arr[], int n)
{
    int max = 0;
    int min = __INT_MAX__;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    printf("%d ", min);
    printf("%d ", max);
}
int main()
{
    int n;
    scanf("%d ", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printB(arr, n);

    return 0;
}