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
        int n, k;
        vector<int> v;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            v.pb(num);
        }
        if (k >= 2)
        {
            YES
        }
        else
        {
            if (is_sorted(v.begin(), v.end()))
            {
                YES
            }
            else
            {
                NO
            }
        }
    }
    return 0;
}
