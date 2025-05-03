#include<stdio.h>
int main()
{
    int a=10,b=20,temp;
    int *ptr1 = &a,*ptr2 = &b;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("%d\n",*ptr1);
    printf("%d\n",*ptr2);
    return 0;
}