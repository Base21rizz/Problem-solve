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
        string s, t;
        vector<char> q;
        int n, l;
        cin >> n >> l;
        cin >> s >> t;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == t[i])
                q.pb(s[i]);
            else
                break;
        }
        for (auto x : q)
            cout << x;
        cout << endl;
    }
    return 0;
}