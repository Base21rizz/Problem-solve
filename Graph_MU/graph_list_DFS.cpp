#include <bits/stdc++.h>
using namespace std;
vector<int> g[5000];
bool vis[5000];
void dfs(int src)
{
    cout << src << " ";
    vis[src] = 1;
    for (int i = 0; i < g[src].size(); i++)
    {
        int child = g[src][i];
        if (vis[child])
            continue;
        dfs(child);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1);
    return 0;
}