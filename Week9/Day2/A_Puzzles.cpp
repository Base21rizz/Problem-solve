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
    int n,m;
    cin >> n >> m;
    vector<int>v;
    for (int i = 0; i < m; i++)
    {
        int num;
        cin >> num;
        v.pb(num);
    }
    sort(v.begin(),v.end());
    int min_diffrence = v[n-1] - v[0];
    for (int i = 1; i <= m-n; i++)
    {
        min_diffrence = min(min_diffrence,v[i+n-1]-v[i]);
    }
    cout << min_diffrence << endl;
    return 0;
}
