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
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    map<int, int> mp1;
    map<int, int> mp2;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp1[a[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        mp2[b[i]]++;
    }
    for (auto it : mp1)
    {
        count += it.second * mp2[it.first];
    }

    cout << count << endl;
    return 0;
}