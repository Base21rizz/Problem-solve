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
int distime[N];
int finish[N];
int timer = 0;

void dfs(int src)
{
    vis[src] = 1;
    timer++;
    distime[src] = timer;
    for (auto child : g[src])
    {
        if (vis[child])
            continue;
        dfs(child);
    }
    timer++;
    finish[src] = timer;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int t = n;
    while (t--)
    {
        int u, k;
        cin >> u >> k;
        for (int i = 0; i < k; i++)
        {
            int v;
            cin >> v;
            g[u].push_back(v);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
            dfs(i);
    }
    for (int i = 1; i <= n; i++)
        cout << i << ' ' << distime[i] << ' ' << finish[i] << endl;

    return 0;
}