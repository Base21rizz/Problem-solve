#include<stdio.h>
int mai()
{
    int array[]={9,1,4,3,7,6,5,8,2};
    int size=sizeof(array)/sizeof(array[0]);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (array[j]>array[j+1])
            {
                int temp;
                temp=array[j];
                array[j+1]=temp;
                printf("%d ",array[j]);
            }
        }        
    }
    return 0;
}