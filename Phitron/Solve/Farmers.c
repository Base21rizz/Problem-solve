#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int m1, m2, d, x;
        scanf("%d %d %d", &m1, &m2, &d);
        x = 0;
        x = d - ((m1 * d) / (m1 + m2));
        printf("%d\n", x);
    }
    return 0;
}