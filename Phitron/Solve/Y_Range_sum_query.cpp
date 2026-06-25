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
    int n, q;
    cin >> n >> q;
    vector<int> v;
    vector<int> prefix_sum;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
        if (i - 1 > -1)
            x += prefix_sum[i - 1];
        prefix_sum.push_back(x);
    }
    int output = 0;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l -= 1;
        r -= 1;
        output = prefix_sum[r];
        if (l - 1 > -1)
            output = prefix_sum[r] - prefix_sum[l - 1];
        cout << output << endl;
    }

    return 0;
}