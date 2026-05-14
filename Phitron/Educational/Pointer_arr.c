#include <stdio.h>
void fun(int x[])
{
    x[1] = 200;
}
int main()
{
    int n = 10;
    int arr[3] = {1, 2, 3};
    int *ptr;
    ptr = &n;
    // fun(ptr);  this is how normal variable is passed by reference
    fun(arr); // array doesnt need pointer to be passed, as it always is passed by reference
    printf("%d \n", n);
    for (int i = 0; i < 3; i++)
        printf("%d ", arr[i]);
    return 0;
}