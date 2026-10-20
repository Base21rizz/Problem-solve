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
    int n, m;
    cin >> n >> m;
    vi a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vi b(m);
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(all(a), greater<int>()); // sort decreasing a
    sort(all(b));                 // sort increasing b
    int j = 0, ans = 0;
    for (int i = 0; i < m; i++)
    {
        if (b[i] == 1)
            j++;
        else
        {
            int pay = b[i] - 1;
            while (pay--)
            {
                if (j >= n)
                    break;
                ans += a[j++]; // pay
            }
            j++; // Free
        }
    }
    while (j <= n - 1) // add whatevers left to ans if theres any
        ans += a[j++];
    cout << ans << endl;
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