#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int printable = 1, space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space--;
        for (int j = printable; j >= 1; j--)
        {
            printf("%d", j);
        }
        printable++;
        printf("\n");
    }
}