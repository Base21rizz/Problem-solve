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
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0, i = 1;
    while (ans < 1001)
    {
        ans = c * i;
        if (a <= ans && ans <= b)
        {
            cout << ans << endl;
            return 0;
        }
        i++;
    }
    cout << "-1" << endl;

    return 0;
}