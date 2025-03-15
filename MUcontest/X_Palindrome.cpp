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
    int n,og,rev = 0;
    cin >> n;
    og = n;
    while (n!=0)
    {
        int digit = n%10;
        rev = rev*10+digit;
        n /= 10;
    }
    cout << rev << endl;
    if(rev == og)  YES
    else NO
    return 0;
}
