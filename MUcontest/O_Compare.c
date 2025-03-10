#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    char t[100];
    scanf("%s",s);
    scanf("%s",t);
    if (strcmp(s,t)<0)
    {
        printf("%s\n",s);
    }
    else
    {
        printf("%s\n",t);
    }
    return 0;
}