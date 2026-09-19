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
        int temp = n;
        vector<string> v;
        map<string, int> map1;
        map<char, int> map2;
        map<char, int> map3;
        while (temp--)
        {
            string s;
            cin >> s;
            v.pb(s);
            map1[s]++;
            map2[s[0]]++;
            map3[s[1]]++;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int x = max(0LL, (map2[v[i][0]] - map1[v[i]]));
            int y = max(0LL, (map3[v[i][1]] - map1[v[i]]));
            ans += (x + y);
            if (map2[v[i][0]] > 0)
                map2[v[i][0]]--;
            if (map3[v[i][1]] > 0)
                map3[v[i][1]]--;
            if (map1[v[i]] > 0)
                map1[v[i]]--;
        }
        cout << ans << endl;
    }
    return 0;
}