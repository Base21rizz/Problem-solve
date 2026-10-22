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
    string s;
    int n, k;
    cin >> n >> k >> s;
    int ans[n] = {};
    int pr = 1;
    int l = 0, r = 0, count = 0;
    while (l < n && r < n)
    {
        if (s[r] == '1')
            count++;
        else if (s[r] == '0')
            count = 0;
        if (r - l + 1 == k && count == k)
        {
            NO;
            return;
        }
        else if (r - l + 1 == k && count != k)
            l++;
        r++;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            ans[i] = pr, pr++;
    }
    for (int i = 0; i < n; i++)
    {
        if (ans[i] == 0)
            ans[i] = pr, pr++;
    }
    YES;
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << endl;
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