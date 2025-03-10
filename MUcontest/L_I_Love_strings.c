#include<stdio.h>
#include<string.h>

int main()
{   
    int tc;
    scanf("%d",&tc);
    while (tc--)
    {
        char s[100];
        char t[100];
        char st[200];
        int slen=0,tlen=0,minimum=0;
        scanf("%s",s);   
        scanf("%s",t);
        slen = strlen(s);
        tlen = strlen(t);
        st[0]='\0';
        if (slen<tlen)
        {
            minimum = slen;
        }
        else
        {
            minimum = tlen;
        }
        for (int i = 0; i < minimum; i++)
        {
            char temp[3];
            temp[0] = s[i];
            temp[1] = t[i];
            temp[2] = '\0';
            strcat(st,temp);
        }
        if (slen>tlen)
        {
            strcat(st,s+minimum);
        }
        else
        {
            strcat(st,t+minimum);
        }
        printf("%s\n",st);
    }
    return 0;
}