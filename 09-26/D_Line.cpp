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
        vector<int> leftright;
        int initialsum = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                initialsum += i;
            else
                initialsum += (n - i - 1);

            if (i < n / 2)
            {
                // left half
                if (s[i] == 'L')
                    leftright.pb(n - i - 1);
            }
            else if (i >= n / 2)
            {
                // right half
                if (s[i] == 'R')
                    leftright.pb(i);
            }
        }
        sort(leftright.begin(), leftright.end());
        for (int k = 0; k < n; k++)
        {
            if (!leftright.empty())
            {
                int curr = leftright.back();
                leftright.pop_back();
                curr = curr - (n - 1 - curr);
                initialsum += curr;
                cout << initialsum << " ";
            }
            else
                cout << initialsum << " ";
        }
        cout << endl;
    }
    return 0;
}