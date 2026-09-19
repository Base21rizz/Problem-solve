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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int m;
        cin >> m;
        map<int, char> mp;
        map<char, int> mprev;
        while (m--)
        {
            mp.clear();
            mprev.clear();
            bool flag = true;
            string s;
            cin >> s;
            if (s.size() != n)
                cout << "NO" << endl;
            else
            {
                for (int i = 0; i < n; i++)
                {
                    int curr = v[i];
                    auto it = mp.find(curr);
                    auto itrev = mprev.find(s[i]);
                    if (it == mp.end() && itrev == mprev.end())
                    { // not in the map
                        mp[curr] = s[i];
                        mprev[s[i]] = curr;
                    }
                    else // in the map
                    {
                        if ((it->second == s[i]) && (itrev->second == v[i])) // same as the previous
                            continue;
                        else
                        {
                            flag = false;
                            break;
                        }
                    }
                }
                if (flag)
                    YES else NO
            }
        }
    }

    return 0;
}