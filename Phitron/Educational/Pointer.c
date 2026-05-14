#include <stdio.h>
void fun(int *x) // catching the value that was passed by reference
{
    *x += 100; // changing that value by accessing it with *
}
int main()
{
    int n = 10;
    int *ptr = &n; // Referencing a Pointer

    n = *ptr + 10;    // Derefrencing a Pointer
    printf("%d ", n); // n = 20
    *ptr = *ptr - 10; // Derefrencing a Pointer
    printf("%d ", n); // n = 10

    fun(ptr); // passing by reference
    printf("%d", n);
    return 0;
}