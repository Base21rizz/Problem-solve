#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int hash = 1, hyph = 3, space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space--;
        if (i % 2 != 0)
        {
            for (int j = 1; j <= hash; j++)
            {
                printf("#");
            }
            printf("\n");
            hash += 4;
        }
        else if (i % 2 == 0)
        {
            for (int j = 1; j <= hyph; j++)
            {
                printf("-");
            }
            printf("\n");
            hyph += 4;
        }
    }
    hash -= 4;
    hyph -= 4;
    space += 2;
    if (n % 2 == 0)
    {
        hyph -= 4;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= space; j++)
            {
                printf(" ");
            }
            space++;
            if (i % 2 != 0)
            {
                for (int j = 1; j <= hash; j++)
                {
                    printf("#");
                }
                printf("\n");
                hash -= 4;
            }
            else if (i % 2 == 0)
            {
                for (int j = 1; j <= hyph; j++)
                {
                    printf("-");
                }
                printf("\n");
                hyph -= 4;
            }
        }
    }
    else if (n % 2 != 0)
    {
        hash -= 4;
        for (int i = 2; i <= n; i++)
        {
            for (int j = 1; j <= space; j++)
            {
                printf(" ");
            }
            space++;
            if (i % 2 != 0)
            {
                for (int j = 1; j <= hash; j++)
                {
                    printf("#");
                }
                printf("\n");
                hash -= 4;
            }
            else if (i % 2 == 0)
            {
                for (int j = 1; j <= hyph; j++)
                {
                    printf("-");
                }
                printf("\n");
                hyph -= 4;
            }
        }
    }
}