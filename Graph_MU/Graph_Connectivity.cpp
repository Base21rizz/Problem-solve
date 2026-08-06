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
    string s;
    cin >> s;
    while (tc--)
    {
        char last = s[0];
        int n = last - 'A' + 1;
        for (int i = 0; i < n; i++)
        {
            g[i].clear();
            vis[i] = 0;
        }

        while (cin >> s)
        {
            if (s.length() == 1)
                break;
            int u = s[0] - 'A';
            int v = s[1] - 'A';
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
        cout << count << endl;
        if (tc > 0)
            cout << endl;
    }
    return 0;
}