#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define pb push_back
using namespace std;

const int N = 100000;
vector<int> g[N];
bool vis[N];
vector<int> visited;

void dfs(int src)
{
    vis[src] = true;
    visited.push_back(src);
    for (auto child : g[src])
    {
        if (vis[child])
            continue;
        vis[child] = true;
        dfs(child);
    }
}

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
    dfs(1);
    bool outputted = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            outputted = 1;
            cout << i << endl;
        }
    }
    if (!outputted)
        cout << "Connected" << endl;
    return 0;
}