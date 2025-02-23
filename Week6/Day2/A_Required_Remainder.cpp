#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int tc; cin >> tc;
    while (tc--) 
    {
        int x,y,n,k = 0;
        cin >> x >> y >> n;
        k = (((n-y)/x) * x) + y;
        cout << k << endl; 
    }
    return 0;
}