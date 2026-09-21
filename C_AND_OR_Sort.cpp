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
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define pb push_back
using namespace std;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> v;
        bool flag = true;
        int first = s[0] - '0';
        int last = s[n - 1] - '0';
        map<int, int> mp;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int curr = s[i] - '0';
            v.pb(curr);
            mp[curr]++;
        }
        int onecount = 0;
        int twocount = 0;
        if (first == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (i <= n / 2)
                {
                    if (v[i] == 0)
                        onecount++;
                    else
                        twocount++;
                }
                else if (i > n / 2)
                {
                    if (v[i] == 0)
                        onecount++;
                    else
                        twocount++;
                }
            }
            cout << min(onecount, twocount) << endl;
        }
        else if (first == 1)
        {
            for (int i = 1; i < n; i++)
            {
                if (v[i] == 0)
                    count++;
            }
            cout << count << endl;
        }
    }
    return 0;
}