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
    vi v;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.pb(val);
    }
    int extra = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || v[i] != v[i - 1])
            count++;
    }
    for (int k = 1; k <= 2; k++)
    {
        for (int i = 0; (i + 3) < n; i++)
        {
            if (v[i] == v[i + 1] && v[i + 2] == v[i + 3] && v[i] != v[i + 2])
                extra = max(extra, (int)2);
            if (v[i] == v[i + 1] && v[i + 2] != v[i] && v[i + 3] != v[i])
                extra = max(extra, (int)1);
        }
        if (n >= 3 && v[n - 1] != v[n - 2] && v[n - 2] == v[n - 3])
            extra = max(extra, (int)1);
        reverse(all(v));
    }
    cout << count + extra << endl;
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