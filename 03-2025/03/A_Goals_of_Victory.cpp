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
    ios::sync_with_stdio(false); cin.tie(NULL);
    int tc; cin >> tc;
    while (tc--) 
    {
        int n;
        cin >> n;
        n -= 1;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            v.pb(num);
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
        }
        sum = -1*sum;
        cout << sum << endl;
    }
    return 0;
}
