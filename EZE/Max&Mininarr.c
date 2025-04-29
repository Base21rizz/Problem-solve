#include<stdio.h>
int main()
{
    int arr[] = {5,3,4,2,58,6,4,69,87,14,54};
    int max = arr[0];
    int min = arr[0];
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Max: %d\n",max);
    printf("Min: %d\n",min);
    return 0;
}