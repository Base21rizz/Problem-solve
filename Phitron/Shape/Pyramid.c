#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1, space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = space; j > 0; j--)
            printf(" ");

        for (int j = 1; j <= star; j++)
            printf("*");

        printf("\n");
        star += 2;
        space--;
    }
    return 0;
}