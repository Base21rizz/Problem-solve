/*
===============================================================================

██████╗  █████╗ ███████╗███████╗██████╗  ██╗██████╗ ██╗███████╗███████╗
██╔══██╗██╔══██╗██╔════╝██╔════╝╚════██╗███║██╔══██╗██║╚══███╔╝╚══███╔╝
██████╔╝███████║███████╗█████╗   █████╔╝╚██║██████╔╝██║  ███╔╝   ███╔╝
██╔══██╗██╔══██║╚════██║██╔══╝  ██╔═══╝  ██║██╔══██╗██║ ███╔╝   ███╔╝
██████╔╝██║  ██║███████║███████╗███████╗ ██║██║  ██║██║███████╗███████╗
╚═════╝ ╚═╝  ╚═╝╚══════╝╚══════╝╚══════╝ ╚═╝╚═╝  ╚═╝╚═╝╚══════╝╚══════╝

===============================================================================
*/
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define pb push_back
using namespace std;

const int N = 100005;
vector<int> g[N];
int minigraphs[N];

void dfs(int src, int id)
{
    minigraphs[src] = id;
    for (int i = 0; i < g[src].size(); i++)
    {
        int child = g[src][i];
        if (minigraphs[child] != -1)
            continue;
        dfs(child, id);
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for (int i = 0; i < n; i++)
        minigraphs[i] = -1;
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        if (minigraphs[i] == -1)
        {
            dfs(i, curr);
            curr++;
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int s, t;
        cin >> s >> t;
        if (minigraphs[s] == minigraphs[t])
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}