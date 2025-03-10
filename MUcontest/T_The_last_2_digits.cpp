#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n, mult = 1, x;
    
    for (int i = 0; i < 4; i++) {
        cin >> n;
        mult = (mult * n) % 100;
    }

    x = mult / 10;
    n = mult % 10;

    cout << x << n;
    return 0;
}
