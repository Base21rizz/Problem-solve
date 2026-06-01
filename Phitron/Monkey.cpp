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
    string s;
    while (getline(cin, s))
    {
        string x;
        for (int i = 0; i < (int)s.size(); i++)
        {
            if (s[i] != ' ')
                x += s[i];
        }
        sort(x.begin(), x.end());
        cout << x << endl;
    }

    return 0;
}