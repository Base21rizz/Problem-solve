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
        int n;
        cin >> n;
        vi v;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.pb(val);
        }
        vi v2;
        for (int i = 0; i < n - 4; i++)
        {
            int count = 0;
            count += v[i] + v[i + 2] - v[i + 4];
            v2.pb(count);
        }
        map<int, int> mp;
        int ans = 0;
        for (int i = 0; i < v2.size(); i++)
        {
            if (mp.find(v2[i]) != mp.end())
            {
                ans += mp[v2[i]];
                if ((i - 2 >= 0) && (v2[i] == v2[i - 2]))
                    ans--;
                if ((i - 4 >= 0) && (v2[i] == v2[i - 4]))
                    ans--;
            }
            mp[v2[i]]++;
        }
        cout << ans << endl;
    }
    return 0;
}