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
        map<string, int> mp;
        vector<string> inputs;
        for (int i = 0; i < 3; i++)
        {
            string fullinput;
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;
                fullinput += s;
                mp[s]++;
            }
            inputs.pb(fullinput);
        }
        for (auto it : inputs)
        {
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                string s;
                for (int j = 0; j < 3; j++)
                {
                    // every input char
                    s += it[i * 3 + j];
                }
                if (mp[s] == 3)
                    count += 0;
                else if (mp[s] == 2)
                    count += 1;
                else
                    count += 3;
            }
            cout << count << " ";
        }
        cout << endl;
    }
    return 0;
}