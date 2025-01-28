#include<stdio.h>
#include<string.h>
int main()
{
    long long int n,anton,danik;
    anton=0;
    danik=0;
    scanf("%lld",&n);
    char string[n];
    scanf("%s",&string);
    for (int i = 0; i < n; i++)
    {
        if (string[i]=='A')
        {
            anton++;
        }
        else if(string[i]=='D')
        {
            danik++;
        }
    }
    if (anton>danik)
    {
        printf("Anton");
    }
    else if(anton<danik)
    {
        printf("Danik");
    }
    else
    {
        printf("Friendship");
    }
    return 0;
}