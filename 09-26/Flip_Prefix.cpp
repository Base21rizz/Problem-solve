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
        string s;
        cin >> s;
        int pre1[n];
        int pre0[n];
        pre1[0] = (s[0] == '1') ? 1 : 0;
        pre0[0] = (s[0] == '0') ? 1 : 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '0')
                pre0[i] = pre0[i - 1] + 1, pre1[i] = pre1[i - 1];
            if (s[i] == '1')
                pre1[i] = pre1[i - 1] + 1, pre0[i] = pre0[i - 1];
        }
        int count = 1;
        for (int i = 0; i < n; i++)
        {
            if (pre0[i] == pre1[i])
                count *= 2;
        }
        cout << count << endl;
    }
    return 0;
}