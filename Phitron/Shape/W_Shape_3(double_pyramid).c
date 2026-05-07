#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1, space = n - 1;
    int star2 = n - 1, space2 = 0;
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
    star -= 2;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j < space2; j++)
            printf(" ");

        for (int j = 1; j <= star; j++)
            printf("*");

        printf("\n");
        star -= 2;
        space2++;
    }
    return 0;
}