#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
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
        int even_num = 0;
        cin >> n >> k;
        vi v;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            if (num % 2 == 0)
                even_num++;
            v.pb(num);
        }
        int ans = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % k == 0)
            {
                ans = 0;
                break;
            }
            else
            {
                ans = min(ans, k - (v[i] % k));
            }
        }
        if(k == 4)
        {
            if(even_num >= 2) ans = 0;
            else if(even_num == 1) ans = min(ans,1LL);
            else if(even_num == 0) ans = min(ans,2LL);
        }
        cout << ans << endl;
    }

    return 0;
}
