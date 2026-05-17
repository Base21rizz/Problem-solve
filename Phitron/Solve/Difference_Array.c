#include <stdio.h>
#include <stdlib.h>
void selectionSort(int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = min; j < n; j++)
        {
            if (b[min] > b[j])
                min = j;
        }
        if (min != i)
        {
            int temp = b[min];
            b[min] = b[i];
            b[i] = temp;
        }
    }
}
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            b[i] = a[i];
        }
        selectionSort(b, n);

        for (int i = 0; i < n; i++)
            printf("%d ", abs(a[i] - b[i]));

        printf("\n");
    }

    return 0;
}