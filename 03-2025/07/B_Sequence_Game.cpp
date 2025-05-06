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
        int n;
        cin >> n;
        vi v;
        vi vnew;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            v.pb(num);
        }
        for (int i = 0; i < n; i++)
        {
            if(i == 0)
            {
                vnew.pb(v[0]);
            }
            else if(v[i] >= v[i-1])
            {
                vnew.pb(v[i]);
            }
            else if(v[i] < v[i-1])
            {
                vnew.pb(v[i]);
                vnew.pb(v[i]);
            }
        }
        int m = vnew.size();
        cout << m << endl;
        for (int i = 0; i < m; i++)
        {
            cout << vnew[i] << ' ';
        }
        cout << endl;
    }
    
    return 0;
}

