#include<stdio.h>
void swap(int *ptr1,int *ptr2)
{
    int s1;
    s1 = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = s1;
}
int main()
{
    int a=10,b=20;

    printf("Before Swap:");
    printf("a=%d b=%d\n",a,b);

    swap(&a,&b);

    printf("After Swap:");
    printf("a=%d b=%d\n",a,b);
    
    return 0;
}