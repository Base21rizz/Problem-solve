#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define pb push_back
using namespace std;

const int N = 105;
vector<int> g[N];
int dis[N];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    dis[src] = 0;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (auto child : g[node])
        {
            if (dis[child] == -1)
            {
                dis[child] = dis[node] + 1;
                q.push(child);
            }
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        dis[i] = -1;
    for (int i = 0; i < N; i++)
    {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; j++)
        {
            int v;
            cin >> v;
            g[u].push_back(v);
        }
    }
    bfs(1);
    for (int i = 1; i <= n; i++)
        cout << i << " " << dis[i] << endl;

    return 0;
}