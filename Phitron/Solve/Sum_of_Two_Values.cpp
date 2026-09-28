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
    int n, x;
    cin >> n >> x;
    int arr[n + 1];
    arr[0] = 0;
    map<int, int> mp;
    bool flag = false;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if (mp.find(arr[i]) != mp.end())
        {
            if (2 * arr[i] == x && !flag)
            {
                cout << mp[arr[i]] << " " << i << endl;
                flag = true;
            }
        }
        mp[arr[i]] = i;
    }
    if (flag)
        return 0;
    else
    {
        for (int i = 1; i <= n; i++)
        {
            int curr = arr[i];
            int lagbe = x - ((arr[i] >= x) ? 0 : arr[i]);
            if (lagbe != x)
            {
                auto it = mp.find(lagbe);
                if (it != mp.end() && it != mp.find(curr))
                {
                    cout << mp.find(curr)->second << " " << it->second << endl;
                    return 0;
                }
            }
        }
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}