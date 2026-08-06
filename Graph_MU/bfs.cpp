#include <bits/stdc++.h>
using namespace std;

const int N = 100000;
vector<int> g[N];
bool vis[N];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (auto child : g[node])
        {
            if (vis[child])
                continue;
            vis[child] = true;
            q.push(child);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    bfs(1);
}