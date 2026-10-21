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
    string p, s;
    cin >> p >> s;
    int n = p.size(), m = s.size();
    char curr = p[0];
    int lc = 0, prev = 0;
    for (int i = 0; i < n; i++)
    {
        while (p[i] == curr)
            lc++;
        if (p[i] != curr)
        {
            int covl = lc * 2, mincov = lc, j = prev;
            while (j <= m)
            {
                if (mincov < 0 && s[j] != curr)
                {
                    prev = j;
                    break;
                }
                else if (mincov > 0 & s[j] != curr)
                {
                    NO;
                    return;
                }
                else if (covl >= 0 && s[j] == curr)
                {
                    NO;
                    return;
                }
                j++, mincov--, covl--;
            }
            curr = p[i];
            lc = 0;
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