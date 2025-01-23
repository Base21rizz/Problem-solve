#include<stdio.h>
int main()
{
    long long int x,ok;
    long long int digits[]={0,0,0};
    ok=1;
    scanf("%lld",&x);
    while (x>0)
    {
        digits[2]=x%10;
        if(digits[2]==1)
        {
            ok=1;
        }
        else if(digits[2]==4)
        {
            digits[1]=(x/10)%10;
            if (digits[1]==1)
            {
                ok=1;
            }
            else if (digits[1]==4)
            {
                digits[0]=(x/100)%10;
                if (digits[0]==1)
                {
                    ok=1;
                }
                else if (digits[0]!=1)
                {
                    ok=0;
                    goto END;
                }
            }
            else
            {
                ok=0;
                goto END;
            }
        }
        else
        {
            ok=0;
            goto END;
        }
        x=x/10;
    }
END:
    if (ok==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0; 
}