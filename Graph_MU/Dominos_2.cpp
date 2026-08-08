#include <bits/stdc++.h>
#define endl '\n'
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define pb push_back
using namespace std;

const int N = 1000000;
vector<int> g[N];
bool visited[N];
int rncount = 0;

void dfs(int src)
{
    visited[src] = 1;
    rncount++;
    for (int i = 0; i < g[src].size(); i++)
    {
        int child = g[src][i];
        if (visited[child])
            continue;
        dfs(child);
    }
}

signed main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        rncount = 0;
        int n, l, m;
        cin >> n >> m >> l;
        for (int i = 1; i <= n; i++)
        {
            g[i].clear();
            visited[i] = 0;
        }

        for (int j = 0; j < m; j++)
        {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
        }
        for (int i = 0; i < l; i++)
        {
            int z;
            cin >> z;
            if (!visited[z])
                dfs(z);
        }
        cout << rncount << endl;
    }

    return 0;
}