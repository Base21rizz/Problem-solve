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
    vector<int>v;
    for (int i = 0; i < 3; i++)
    {
        int num;
        cin >> num;
        v.pb(num);
    }
    sort(v.begin(),v.end());
    cout << v[0] << ' ' << v[2] << endl;
    return 0;
}
