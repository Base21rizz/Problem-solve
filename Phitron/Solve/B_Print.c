#include <stdio.h>
void printB(int *n)
{
    for (int i = 1; i < *n; i++)
        printf("%d ", i);
    printf("%d", *n);
}
int main()
{
    int n;
    scanf("%d ", &n);
    printB(&n);
    return 0;
}