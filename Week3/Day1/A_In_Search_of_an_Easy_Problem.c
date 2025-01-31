#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    bool result = true;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            result =  false;
            break;
        }
    }
    if (result == false)
    {
        printf("HARD");
    }
    else
    {
        printf("EASY");
    }
    return 0;
}
