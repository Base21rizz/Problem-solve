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
        int n,m,ans=0;
        cin >> n >> m;
        string x,s;
        cin >> x >> s;
        string orig = x;
        int max_attempts = 10;
        while (x.find(s) == string::npos && ans < max_attempts)
        {
            x=x+x;
            ans++;
        }
        if(x.find(s) == string::npos)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}