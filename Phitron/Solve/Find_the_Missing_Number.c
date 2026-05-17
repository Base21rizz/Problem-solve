#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        long long int m;
        long long int a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long int ans = m / (a * b * c);
        if (m % (a * b * c) != 0)
            printf("-1\n");
        else
            printf("%ld\n", ans);
    }
    return 0;
}