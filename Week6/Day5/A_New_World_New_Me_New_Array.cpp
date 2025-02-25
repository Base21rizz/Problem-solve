#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int tc; cin >> tc;
    while (tc--) 
    {
        int n,k,p,x = 0,px = 0,nx = 0,ans = 1;
        cin >> n >> k >> p;
        px = n*p;
        nx = -1*px;
        if(k>=nx && k<=px)
        {
            ans = (abs(k) + p - 1)/p;
            cout << ans << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}