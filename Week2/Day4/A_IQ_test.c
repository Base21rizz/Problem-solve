#include<stdio.h>
int main()
{
    int n,even,odd;
    even=0;
    odd=0;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
        if (array[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if (even>odd)
    {
        for (int j = 0; j < n; j++)
        {
            if((array[j]%2)!=0)
            {
                printf("%d",j+1);
                break;
            }
        }        
    }
    else if(odd>even)
    {
        for (int j = 0; j < n; j++)
        {
            if ((array[j]%2)==0)
            {
                printf("%d",j+1);
                break;
            }
        }
        
    } 
    return 0;
}