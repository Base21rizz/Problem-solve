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
        vector<int> v(n + 1);
        vector<pair<int, int>> ans;
        bool flag = true;
        for (int i = 1; i <= n; i++)
            cin >> v[i];

        int k = (n + 1) / 2;
        int median = k;
        int l = 1, r = n;
        pair<int, int> p = {l, r};
        ans.pb(p);
        int i = 2;
        while (i <= k)
        {
            median--;
            if (v[l] > median && v[l + 1] > median)
                l += 2;
            else if (v[r] > median && v[r - 1] > median)
                r -= 2;

            else if (v[l] > median && v[r] > median)
            {
                l++;
                r--;
            }
            else
                flag = false;

            if (flag)
            {
                p = {l, r};
                ans.pb(p);
            }
            else
                break;
            i++;
        }
        if (flag)
        {
            for (auto i = k - 1; i >= 0; i--)
            {
                cout << ans[i].first << " " << ans[i].second << endl;
            }
        }
        else
            cout << -1 << endl;
    }
    return 0;
}