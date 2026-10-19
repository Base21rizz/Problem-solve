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
    int n;
    cin >> n;
    vi v1(n), v2(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
        mp[v1[i]] = i;
    }
    for (int i = 0; i < n; i++)
        cin >> v2[i];
    vi newvector;
    for (int i = 0; i < n; i++)
    {
        if (i - 1 >= 0 && v2[i] == v2[i - 1])
            continue;
        else
            newvector.pb(v2[i]);
    }
    vi ans;
    for (int i = 0; i < newvector.size(); i++)
        ans.pb(mp[newvector[i]]);

    for (int i = 0; i < ans.size(); i++)
    {
        if (i - 1 >= 0 && ans[i] < ans[i - 1])
        {
            NO;
            return;
        }
    }
    YES;
    return;
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