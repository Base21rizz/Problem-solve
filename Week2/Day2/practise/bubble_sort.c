#include<stdio.h>
void sort(int array[] ,int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j]>array[j+1])
            {
                int temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }            
        }
    }
}
void print(int array[] ,int size)
{
    for (int k = 0; k < size; k++)
    {
        printf("%d ",array[k]);
    }  
}
int main()
{
    int array[]={7,9,1,4,2,8,5,6};
    int size = sizeof(array)/sizeof(array[0]);
    sort(array, size);
    print(array , size);
    return 0;   
}
