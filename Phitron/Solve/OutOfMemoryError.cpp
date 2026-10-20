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
#define fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define vi vector<int>
#define si set<int>
#define msi multiset<int>
#define all(v) (v).begin(), (v).end()
#define pb push_back
using namespace std;

void solve()
{
    int n, m, h;
    cin >> n >> m >> h;
    vi a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<pair<int, int>> p(m);
    for (auto &[i, x] : p)
    {
        cin >> i >> x;
        i--;
    }
    int lastreset = 0;
    for (int k = 0; k < m; k++)
    {
        auto [i, x] = p[k];
        a[i] += x; // the operation
        if (a[i] > h)
        {
            // reset needed
            for (int j = k; j >= lastreset; j--)
            {
                auto [bi, ci] = p[j];
                a[bi] -= ci; // reset the operation
            }
            lastreset = k + 1;
        }
    }
    for (auto it : a)
        cout << it << " ";
    cout << endl;
}

signed main()
{
    fast_IO;
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}