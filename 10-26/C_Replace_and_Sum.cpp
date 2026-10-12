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

signed main()
{
    fast_IO;
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        vi v;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.pb(val);
        }
        vi s;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            s.pb(val);
        }
        for (int i = 0; i < n; i++)
            v[i] = max(v[i], s[i]);

        for (int i = n - 1; i >= 0; i--)
        {
            if (i != n - 1)
                v[i] = max(v[i], v[i + 1]);
        }
        // prefixsum
        int pre[n + 1];
        pre[0] = 0;
        pre[1] = v[0];
        for (int i = 1; i < n; i++)
            pre[i + 1] = pre[i] + v[i];

        // Querries
        while (k--)
        {
            int l, r;
            cin >> l >> r;
            cout << pre[r] - pre[l - 1] << ' ';
        }
        cout << endl;
    }
    return 0;
}