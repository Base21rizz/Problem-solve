#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
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
    int n;
    cin >> n;
    vi v;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.pb(num);
    }
    transform(v.begin(), v.end(), v.begin(), [](int x)
              { return abs(x); });
    sort(v.begin(), v.end());
    cout << v[0];
    return 0;
}
