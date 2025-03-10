#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000];
    fgets(s, 100000 ,stdin);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ',')
        {
            s[i] = ' ';
        }
        else if((97 <= (int)s[i]) && ((int)s[i]<= 122))
        {
            s[i] = (int)s[i] - 32;
        }
        else if((65 <= (int)s[i]) && (s[i] <= 90))
        {
            s[i] = (int)s[i] + 32;
        }
    }
    printf("%s", s);
    return 0;
}