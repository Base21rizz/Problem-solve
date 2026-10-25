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
    vi v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    int curr = 0, mx = 0, start = -1, end = 0, ss = 0, se = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp[v[i]] == 1) // run start
        {
            if (start == -1)
                start = i;
        }
        else if (start != -1) // in between run
        {
            if (i - start > mx)
            {
                mx = i - start;
                ss = start;
                se = i - 1;
            }
            start = -1;
        }
    }
    if (start != -1 && n - start > mx) // if run still open after the loop
    {
        mx = n - start;
        ss = start;
        se = n - 1;
    }

    if (mx == 0)
        cout << 0 << endl;
    else
        cout << ss + 1 << " " << se + 1 << endl;
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