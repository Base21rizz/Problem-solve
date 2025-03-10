#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    char t[1000];
    scanf("%s",s);
    scanf("%s",t);
    int slen = strlen(s);
    int tlen = strlen(t);
    s[slen] = ' ';
    s[slen + 1] = '\0';
    strcat(s,t);
    printf("%d ",slen);
    printf("%d\n",tlen);
    printf("%s",s);
    return 0;
}