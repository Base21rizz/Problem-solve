#include<stdio.h>
#include<string.h>
int main()
{
    char s[101],t[101];
    scanf("%s",s);
    scanf("%s",t);
    int length = strlen(s);
    for (int i = 0; i < length/2; i++)
    {
        char temp = s[i];
        s[i] = s[length - i - 1];
        s[length - i - 1] = temp;
    }
    if (strcmp(s,t) == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    } 
    return 0;
}