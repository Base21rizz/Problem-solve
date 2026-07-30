#include <stdio.h>
#include <string.h>
int main()
{
    char s1[1001], s2[1001];
    scanf("%s", s1);
    scanf("%s", s2);
    int s, e;
    scanf("%d %d", &s, &e);

    int j = 0;
    char s3[1001];
    for (int i = s; i <= e; i++)
    {
        s3[j] = s2[i];
        j++;
    }
    s3[j] = '\0';
    strcat(s1, s3);
    printf("%s", s1);
    return 0;
}