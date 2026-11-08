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
        int l,r,d,u;
        cin >> l >> r >> d >> u;
        if(r+u == u+d)
        {
            if((l+u == r+u) && (l+u == l+d) && (l+u == r+d))
            {
                Yes
            }
            else
            {
                No
            }
        }
        else{
            No
        }
    }
    
    return 0;
}
