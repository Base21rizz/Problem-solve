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
        map<int, int> mp;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]] = i;
        }
        for (int i = 0; i < n; i++)
        {
            int k = v[i];
            for (int j = k - 2; j >= 1; i--)
            {
                int jsindice = mp[j];
                int ksindice = mp[k];
                if (jsindice > ksindice)
                {
                    mp[j] = mp[k];
                    mp[k] = jsindice;
                }
            }
        }
        vector<int> ans;
        for (auto it : mp)
        {
            cout << it.first << " " << it.second << endl;
        }
    }
    return 0;
}