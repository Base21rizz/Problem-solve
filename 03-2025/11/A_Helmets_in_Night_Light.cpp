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
    ios::sync_with_stdio(false); cin.tie(NULL);
    int tc; cin >> tc;
    while (tc--) 
    {
        int n,p;
        cin >> n >> p;
        vector<pair<int,int>>v(n);
        vi a,b;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            a.pb(num);
        }
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            b.pb(num);
        }
        for (int i = 0; i < n; i++)
        {
           v[i] = {b[i],a[i]};
        }
        sort(v.begin(),v.end());
        int mincost = p;
        int sharedpeople = 1;
        for(auto it : v)
        {
            int shareable = it.second;
            int sharecost = it.first;

            if(sharecost >= p) break;
            if(sharedpeople + shareable > n)
            {
                mincost += (n-sharedpeople) * sharecost;
                sharedpeople = n;
                break; 
            }
            else
            {
                mincost += shareable * sharecost;
                sharedpeople += shareable;
            }
        }
        mincost += (n-sharedpeople) * p;
        cout << mincost << endl;
    }
    return 0;
}
