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
#define mpi multiset<int>
#define all(v) (v).begin(), (v).end()
#define pb push_back
using namespace std;

signed main()
{
    fast_IO;
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        int k;
        cin >> k;
        string s;
        cin >> s;
        int n = s.size();
        int l = 0, r = 0, ans = -1;
        map<char, int> mp;
        while (l < n && r < n)
        {
            mp[s[r]] = r;
            if (mp.size() == k)
                ans = max(ans, (r - l + 1));
            else if (mp.size() > k)
            {
                auto it = mp.begin();
                int mn = 9999999;
                char rm = ' ';
                while (it != mp.end())
                {
                    if (mn > it->second)
                        mn = it->second, rm = it->first;
                    it++;
                }
                l = mn + 1;
                mp.erase(rm);
            }
            r++;
        }
        cout << ans << endl;
    }
    return 0;
}