#include<stdio.h>
int main()
{
    int array[]={4,7,6,2,8,3,9,5};
    int size]=sizeof(array)/sizeof(array[0]);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {   
            if (array[j]>array[j+1])
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
        
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}