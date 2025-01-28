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
    printf("%d %d\n",sum_sereja,sum_dima);
    return 0;
}