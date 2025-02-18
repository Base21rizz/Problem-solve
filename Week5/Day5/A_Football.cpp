#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char a[101];
    scanf("%s",&a);
    n = strlen(a);
    int mz=0,mo=0,cz=0,co=0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '0')
            {
                cz++;
                co=0;
            }
            else if(a[i] == '1')
            {
                co++;
                cz=0;
            }
            if (cz>mz)
            {
                mz=cz;
            }
            if (co>mo)
            {
                mo=co;
            }
        }
    if (mz >=7 || mo >= 7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}