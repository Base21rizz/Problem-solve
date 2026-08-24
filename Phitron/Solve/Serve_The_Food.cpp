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
    int n;
    cin >> n;
    queue<int> q;
    while (n--)
    {
        int t, x;
        cin >> t;
        if (t == 1)
        {
            cin >> x;
            q.push(x);
        }
        if (t == 2)
        {
            if (q.empty())
                cout << "-1" << endl;
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }

    return 0;
}