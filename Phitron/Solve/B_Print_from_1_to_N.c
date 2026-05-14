#include <stdio.h>
void printer(int n, int i)
{
    if (i > n)
        return 0;

    printf("%d\n", i);
    printer(n, ++i);
}
int main()
{
    int n;
    scanf("%d", &n);
    int i = 1;
    printer(n, i);
}