#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll a,b,ans;
    char s;
    cin >> a >> s >> b;
    switch (s)
    {
        case '+':
            ans = a+b;
            break;
        case '-':
            ans = a-b;
            break;
        case '*':
            ans = a*b;
            break;
        case '/':
            ans = a/b;
            break;
        default:
            break;
    }
    cout << ans;

    return 0;
}