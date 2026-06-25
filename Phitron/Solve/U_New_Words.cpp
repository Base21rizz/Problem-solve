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
    string s, q;
    cin >> s;
    for (auto c : s)
    {
        q += tolower(c);
    }
    int e = 0, g = 0, y = 0, p = 0, t = 0;
    for (auto c : q)
    {
        if (c == 'e')
            e++;
        if (c == 'g')
            g++;
        if (c == 'y')
            y++;
        if (c == 'p')
            p++;
        if (c == 't')
            t++;
    }
    int x = 0;
    x = min(e, min(g, min(y, min(p, t))));

    cout << x;

    return 0;
}
