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
        vector<int> v;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.pb(val);
        }
        s.insert(v[0]);
        int count = 1;
        vector<int> car;
        for (int i = 1; i < n; i++)
        {
            int curr = v[i];
            auto it = s.find(curr);
            if (it == s.end())
            { // not in the set
                car.pb(curr);
            }
            else
            {
                car.pb(curr);
                s.erase(curr);
                if (s.empty())
                {
                    count++;
                    for (auto it : car)
                        s.insert(it);
                    car.clear();
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}