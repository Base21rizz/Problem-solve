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
    // cin >> tc;
    while (tc--)
    {
        int k;
        cin >> k;
        string s;
        cin >> s;
        int n = s.size();
        int l = 0, r = 0, ans = -1;
        set<char> ms;
        queue<char> q;
        map<char, int> mp;
        while (l < n && r < n)
        {
            ms.insert(s[r]);
            q.push(s[r]);
            mp[s[r]]++;
            if (ms.size() >= k)
            {
                int hkjh = q.size();
                ans = max(ans, hkjh);
                while (l < r)
                {
                    char curr = s[l++];
                    while (mp[curr] != 0)
                    {
                        if (q.empty())
                            break;
                        char x = q.front();
                        q.pop();
                        if (x == curr)
                            mp[curr]--;
                    }
                }
            }
            r++;
        }
        // if (ms.size() == 1 || ms.size() )
        //     ans = -1;
        cout << ans;
    }
    return 0;
}