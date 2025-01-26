#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char inp[1000];
    scanf("%s",inp);
    inp[0]= toupper(inp[0]);
    printf("%s",inp);
    return 0;
}