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
    int tc, p, v, t, score;
    cin >> tc;
    score = 0;
    while (tc--)
    {
        cin >> p >> v >> t;
        if (p == 1 && v == 1 && t == 1)
        {
            score++;
        }
        else if (p == 1 && v == 1)
        {
            score++;
        }
        else if (v == 1 && t == 1)
        {
            score++;
        }
        else if (p == 1 && t == 1)
        {
            score++;
        }
    }
    cout << score;
    return 0;
}