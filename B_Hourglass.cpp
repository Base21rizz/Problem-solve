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
#define fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define vi vector<int>
#define si set<int>
#define msi multiset<int>
#define all(v) (v).begin(), (v).end()
#define pb push_back
using namespace std;

signed main()
{
    fast_IO;
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int s, k, m;
        cin >> s >> k >> m;
        int even = s, odd = 0, steps = 0;
        while (true)
        {
            int curr = (m < k) ? m : k;
            m -= (m < k) ? m : k;
            if (steps % 2 == 0)
                even -= (curr > s) ? s : curr, odd += (curr > s) ? s : curr;
            else
                odd -= (curr > s) ? s : curr, even += (curr > s) ? s : curr;
            swap(even, odd);
            steps++;
            if (m == 0)
                break;
        }

        cout << steps << " " << even << " " << odd << endl;
    }
    return 0;
}