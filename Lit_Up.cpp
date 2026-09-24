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
        int n, k;
        cin >> n >> k;
        multiset<pair<int, int>> ms;
        vector<int> v((n + 1), 0);
        int ans = LLONG_MAX;
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            ms.insert({v[i], i});
        }
        if (4 * k < n - 1)
            cout << -1 << endl;
        else
        {
            int loopcond = n - 1;
            auto firstit = ms.begin();
            for (auto i = firstit; i != ms.end(); i++)
            {
                auto secondit = i;
                secondit++;
                for (auto j = secondit; j != ms.end(); j++)
                {
                    int curr = i->second;
                    int nx = j->second;
                    if ((curr - nx) * k >= loopcond)
                    {
                        ans = min(ans, (i->first + j->first));
                    }
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}