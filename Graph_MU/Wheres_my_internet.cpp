#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define pb push_back
using namespace std;

const int N = 200005;
vector<int> g[N];
bool vis[N];

void dfs(int src)
{
    vis[src] = 1;
    for (int i = 0; i < g[src].size(); i++)
    {
        int child = g[src][i];
        if (vis[child])
            continue;
        dfs(child);
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    if (!(cin >> n >> m))
        return 0;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1);
    bool conn = true;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            cout << i << endl;
            conn = false;
        }
    }
    if (conn)
        cout << "Connected" << endl;
    return 0;
}