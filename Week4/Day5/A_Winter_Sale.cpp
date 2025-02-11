#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double a,b,x;
    cin >> a >> b;
    x = b/(1-(a/100));
    cout << fixed << setprecision(2) << x;
    return 0;
}