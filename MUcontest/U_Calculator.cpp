#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define pb push_back
using namespace std;

signed main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int a,b,ans;
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
