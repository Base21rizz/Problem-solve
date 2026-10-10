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
        vi a;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            a.pb(val);
        }
        vi h;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            h.pb(val);
        }
        int l = 0, r = 0, fruits = 0, ans = 0;
        while (l < n && r < n)
        {
            fruits += a[r];
            while (fruits > k)
                fruits -= a[l++];
            while ((r - 1 >= l) && (h[r - 1] % h[r] != 0))
                fruits -= a[l++];
            ans = max(ans, r - l + 1);
            r++;
        }
        cout << ans << endl;
    }
    return 0;
}