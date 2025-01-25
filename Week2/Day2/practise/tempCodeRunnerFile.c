
void sort(int array[],int size[])
{
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
}
void printArray()
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
    }
    
}