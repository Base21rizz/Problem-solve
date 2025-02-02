#include<stdio.h>
#include<math.h>
int main()
{
    int t,x,y,z,dif1,dif2;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        if (x-y == 0 && y-z == 0)
        {
            printf("YES\n");
        }
        
        else if(x-y == 0)
        {
            dif1 = abs(y-z);
            if (dif1 % 2 == 0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else if (y - z == 0)
        {
            dif2 = abs(x-y);
            if (dif2 % 2 ==0)    
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else if (x-y != 0 && y-z != 0)
        {
            dif1 = abs(x-y);
            dif2 = abs(y-z);
            if (dif1 > dif2)
            {
                if (dif1 % dif2 ==0)
                {
                    printf("YES\n");
                }
                else
                {
                    printf("NO\n");
                }
            }
            else if (dif2 > dif1)
            {
                if (dif2 % dif1 == 0)
                {
                    printf("YES\n");
                }
                else
                {
                    printf("NO\n");
                }
            }           
        }
    }  
    return 0;
}