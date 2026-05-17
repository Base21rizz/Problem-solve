#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int line = 6;
    for (int i = 1; i < n; i += 2)
        line++;
    int star = 1;
    int space = line - 1;
    int latSpace = space;

    for (int i = 1; i <= line; i++)
    {
        for (int j = latSpace; j > 0; j--)
            printf(" ");

        for (int j = 1; j <= star; j++)
            printf("*");

        printf("\n");
        star += 2;
        latSpace--;
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j > 0; j--)
            printf(" ");
        for (int j = 1; j <= n; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}