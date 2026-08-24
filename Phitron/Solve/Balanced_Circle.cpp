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
        bool flag = true;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.push_back(val);
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                if (v[i] != v[i + 1])
                {
                    flag = false;
                    break;
                }
            }
            else if (!(v[i - 1] <= v[i] && i - 1 >= 0))
            {
                flag = false;
                break;
            }
        }
        if (flag)
            YES else NO
    }
    return 0;
}