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
        map<char, int> mp;
        for (int i = 0; i < n; i++)
            mp[s[i]]++;
        if (s[0] == '1')
            cout << mp['0'] << endl;
        else if (s[0] == '0')
        {
            // use suffix and prefix to count all combination and then print
            vector<int> presum(n + 1), susum(n + 2);
            for (int i = 1; i < n; i++)
            {
                presum[i] += presum[i - 1];
                if (s[i] == '1')
                    presum[i]++;
            }
            for (int i = n - 1; i >= 0; i--)
            {
                susum[i] += susum[i + 1];
                if (s[i] == '0')
                    susum[i]++;
            }
            int ans = LLONG_MAX;
            for (int i = 0; i < n; i++)
            {
                int curr = presum[i] + susum[i + 1];
                ans = min(curr, ans);
            }
            cout << ans << endl;
        }
    }
    return 0;
}