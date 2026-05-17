#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int i = 0, j = n - 1;
    int printCounter = 0;
    while (1)
    {
        if (printCounter % 2 == 0)
        {
            printf("%d ", arr[i]);
            i++;
        }
        else if (printCounter % 2 != 0)
        {
            printf("%d ", arr[j]);
            j--;
        }
        printCounter++;

        if (printCounter == n)
            return 0;
    }
}