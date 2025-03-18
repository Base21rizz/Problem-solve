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
    vector<int>v;
    int n,ans = 0;cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.pb(num);
    }
    for (int i = 0; i < n; i++)
    {
        if(v[i] == 1)
        {
            ans--;
        }
        else if(v[i] == -1)
        {
            ans++;
        }
    }   
    cout << ans;
    return 0;
}
