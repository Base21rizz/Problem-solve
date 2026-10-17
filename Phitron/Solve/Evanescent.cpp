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
    string s;
    cin >> s;
    int dis = 1, ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
            dis++;
    }
    bool tri = false;
    for (int i = 0; i < n - 2; i++)
    {
        if (s[i] != s[i + 1] && s[i] == s[i + 2])
        {
            tri = true;
            break;
        }
    }
    if (tri)
    {
        cout << dis - 2 << endl;
        return;
    }
    int count = 1, mn = LLONG_MAX;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
            count++;
        else
        {
            if (i != 1)
                mn = min(mn, count), count = 1;
        }
    }
    if (mn == 1)
    {
        cout << dis - 1 << endl;
        return;
    }
    cout << dis << endl;
    return;
}

signed main()
{
    fast_IO;
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}