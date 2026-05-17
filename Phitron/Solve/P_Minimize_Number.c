#include <stdio.h>
int countAns = 0;
void counter(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr[i] /= 2;
            count++;
        }
    }
    if (count == n)
    {
        countAns++;
        counter(arr, n);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    counter(arr, n);
    printf("%d", countAns);
}