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

void dfs(int src)
{
    vis[src] = true;
    cout << src << " ";
    for (auto child : g[src])
    {
        if (vis[child])
            continue;
        dfs(child);
    }
    endl;
}
void bfs(int src)
{
    cout << "BFS -> ";
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        cout << q.front() << " ";
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
    // dfs(1);
    bfs(1);
    return 0;
}