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
        int n,x;
        cin>>n>>x;
        vector<int>v;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            v.pb(num);
        }
        int max_dis = 0;
        for (int i = 0; i < n-1; i++)
        {
            max_dis = max((v[i+1]-v[i]),max_dis);
        }
        int first_dis = v[0];
        int last_dis = (x-v[n-1])*2;
        int flag = max({first_dis,last_dis,max_dis});
        cout << flag << endl;
    }
    return 0;
}
