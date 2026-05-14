#include <stdio.h>
void printB(int a, int b, int c)
{
    if (b >= a && c >= a)
    {
        printf("%d\n", a);
        if (b <= c)
        {
            printf("%d\n", b);
            printf("%d\n", c);
        }
        else
        {
            printf("%d\n", c);
            printf("%d\n", b);
        }
    }
    else if (a >= b && c >= b)
    {
        printf("%d\n", b);
        if (a <= c)
        {
            printf("%d\n", a);
            printf("%d\n", c);
        }
        else
        {
            printf("%d\n", c);
            printf("%d\n", a);
        }
    }
    else
    {
        printf("%d\n", c);
        if (a <= b)
        {
            printf("%d\n", a);
            printf("%d\n", b);
        }
        else
        {
            printf("%d\n", b);
            printf("%d\n", a);
        }
    }
}
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printB(a, b, c);

    printf("\n");
    printf("%d\n%d\n%d", a, b, c);
    return 0;
}