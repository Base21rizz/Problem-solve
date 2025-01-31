#include<stdio.h>
void sort(char array[] ,int size)
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
void print(char srf[] ,int size)
{
    for (int k = 0; k < size; k++)
    {
        printf("%c ",srf[k]);
    }  
}
int main()
{
    char array[]={'c', 'l', 'x', 'a' , 'r'};
    int size = sizeof(array)/sizeof(array[0]);
    sort(array, size);
    print(array , size);
    return 0;   
}