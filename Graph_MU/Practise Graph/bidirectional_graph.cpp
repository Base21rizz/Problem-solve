#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define pb push_back
using namespace std;

const int N = 1000000;
vector<int> g[N];
bool vis[N];

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << i << " -> ";
        for (auto it : g[i])
        {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}