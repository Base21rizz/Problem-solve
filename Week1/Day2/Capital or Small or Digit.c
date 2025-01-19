#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if(x>=48&&x<=57)
    {
        printf("IS DIGIT");
    }
    else if(x>=65&&x<=123)
    {
        printf("ALPHA\n");
        if(x>=65&&x<=91)
        {
            printf("IS CAPITAL");
        }
        else if(x>=97&&x<=123)
        {
            printf("IS SMALL");
        }
    }
    return 0;
}
