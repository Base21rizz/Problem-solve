#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define pb push_back
using namespace std;

signed main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int k,s,x,y,z,count = 0;
    cin >> k >> s;
    for (x = 0; x <= k; x++)
    {
        for (y = 0; y <= k; y++)
        {
            z = s-(x+y);
            if(z>=0 && z<=k)
            {
                count++;
            }
        } 
    }
    cout << count;
    return 0;
}