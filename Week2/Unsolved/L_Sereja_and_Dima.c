/* #include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] > pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main()
{
    int n;
    int sum_dima = 0;
    int sum_sereja=0;
    scanf("%d",&n);
    if(n==0)
    {
        printf("0 0");
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    quickSort(arr, 0, n-1);
    
    //sereja
    for (int i = 0; i < n; i=i+2)
    {
        sum_sereja=sum_sereja+arr[i];
    }
    
    //dima
    for (int j = 1; j < n; j=j+2)
    {
        sum_dima=sum_dima+arr[j];
    }

    printf("%d %d",sum_sereja,sum_dima);
    
    return 0;
} */
#include<stdio.h>
int main()
{
    int n;
    int sum_sereja = 0;
    int sum_dima = 0;
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int left=0, right=n-1;
    int turn = 0;

    while (left <= right)
    {
        if (arr[left] > arr[right])
        {
            if (turn == 0)
            {
                sum_sereja += arr[left];
            }
            else
            {
                sum_dima += arr[left];
            }
            left++; 
        }
        else
        {
            if (turn==0)
            {
                sum_sereja += arr[left];
            }
            else
            {
                sum_dima += arr[right];
            }
            right--;
        }
        turn = 1 - turn;
    }
    printf("%d %d",sum_sereja,sum_dima);
    return 0;
}