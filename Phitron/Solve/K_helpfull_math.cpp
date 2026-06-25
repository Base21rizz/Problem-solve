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
    string s, t;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '+')
            t += s[i];
    }
    sort(t.begin(), t.end());
    for (int i = 0; i < t.size(); i++)
    {
        if (i == (t.size() - 1))
            cout << t[i];
        else
            cout << t[i] << '+';
    }

    return 0;
}