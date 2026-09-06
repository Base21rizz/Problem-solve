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
        string s;
        cin >> s;
        stack<pair<char, int>> upper, lower;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'b')
            {
                if (!lower.empty())
                {
                    lower.pop();
                }
            }
            else if (s[i] == 'B')
            {
                if (!upper.empty())
                {
                    upper.pop();
                }
            }
            else
            {
                if (s[i] > 64 && s[i] < 91)
                    upper.push({s[i], i});
                else if (s[i] > 96 && s[i] < 123)
                    lower.push({s[i], i});
            }
        }
        int size = upper.size() + lower.size();
        string ans(s.size(), '0');
        while (!upper.empty())
        {
            ans[upper.top().second] = upper.top().first;
            upper.pop();
        }
        while (!lower.empty())
        {
            ans[lower.top().second] = lower.top().first;
            lower.pop();
        }
        for (int i = 0; i < ans.size(); i++)
        {
            if (ans[i] != '0')
                cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}