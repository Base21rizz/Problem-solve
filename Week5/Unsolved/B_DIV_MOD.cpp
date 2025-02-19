#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    int tc; cin >> tc;
    while (tc--) 
    {
        int l,r,a,g,n;
        vector <int> arr;
        cin >> l >> r >> a;
        for (int i = l; i <= r; i++)
        {
            r = r-i;
            g = (r/a) + r % a;
            arr.pb(g);
        }
        int maxnumber=*max_element(arr.begin(),arr.end());
        cout << maxnumber << endl;
    }
    return 0;
}