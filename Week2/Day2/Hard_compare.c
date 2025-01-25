#include<stdio.h>
#include<math.h>
int main() {
    long long int a, b, c, d;
    double a_b, c_d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    a_b = b*log(a);
    c_d = d*log(c);
    if (a_b>c_d) 
    {
        printf("YES");
    } 
    else if (a_b == c_d) 
    {
        printf("NO");
    } 
    else 
    {
        printf("NO");
    }
    return 0;
}