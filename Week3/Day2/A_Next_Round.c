#include<stdio.h>
int main()
{
    int n,k,score;
    score = 0;
    scanf("%d %d",&n,&k);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[k-1] == 0)
        {
            if (arr[i] > 0)
            {
                score++;
            }
        }
        else if (arr[k-1] != 0)
        {
            if (arr[i] >= arr[k-1])
            {
                score++;
            }
            else if(arr[i] < arr[k-1])
            {
                break;
            }
        }
    }
    printf("%d",score);
    return 0;
}