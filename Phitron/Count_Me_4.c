#include <stdio.h>
#include <string.h>
int main()
{
    char s[10001];
    scanf("%s", s);
    int arr[26] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        int x = 0;
        x = s[i] - 'a';
        arr[x]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
        {
            int alphabet = 'a' + i;
            printf("%c - ", alphabet);
            printf("%d\n", arr[i]);
        }
    }
    return 0;
}