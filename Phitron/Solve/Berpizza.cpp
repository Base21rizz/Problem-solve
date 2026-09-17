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
    int n;
    cin >> n;
    multiset<pair<int, int>, greater<pair<int, int>>> ms;
    set<pair<int, int>> s;
    vector<int> ans;
    int serial = 0;
    while (n--)
    {
        int k;
        cin >> k;
        if (k == 1)
        {
            serial++;
            int x;
            cin >> x;
            s.insert({serial, x});
            ms.insert({x, -serial});
        }
        else if (k == 2)
        {
            auto curr = s.begin();
            ans.pb(curr->first);
            auto curfir = curr->first, cursec = curr->second;
            s.erase({curr->first, curr->second});
            ms.erase({cursec, -curfir});
        }
        else if (k == 3)
        {
            auto curr = ms.begin();
            ans.pb(curr->second);
            auto curfir = curr->first, cursec = curr->second;
            ms.erase({curr->first, curr->second});
            s.erase({-cursec, curfir});
        }
    }
    /* cout << "ms" << endl;
    for (auto it : ms)
        cout << it.first << " " << it.second << ',';
    cout << endl;
    cout << "s" << endl;
    for (auto it : s)
        cout << it.first << " " << it.second << ',';
    cout << endl; */
    for (auto it : ans)
        cout << abs(it) << " ";
    cout << endl;
    return 0;
}