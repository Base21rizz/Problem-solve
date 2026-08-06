#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define pb push_back
using namespace std;

vector<int> g[5000];
bool vis[5000];

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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            g[i].clear();
            vis[i] = 0;
        }
        for (int i = 1; i <= m; i++)
        {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                dfs(i);
                count++;
            }
        }
        cout << count - 1 << endl;
    }
    return 0;
}