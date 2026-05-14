#include <stdio.h>
#include <string.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        char s[10001];
        scanf("%s", s);
        int capital = 0, small = 0, num = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
                capital++;
            else if (s[i] >= 97 && s[i] <= 122)
                small++;
            else if (s[i] >= '0' && s[i] <= '9')
                num++;
        }
        printf("%d %d %d\n", capital, small, num);
    }
    return 0;
}