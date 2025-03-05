#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define pb push_back
using namespace std;

signed main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int tc; cin >> tc;
    while (tc--) 
    {
        string a;
        cin >> a;
        reverse(a.begin(),a.end());
        for (int i = 0; i < a.size(); i++)
    {
        if(a[i] == 'p')
        {
            a[i] = 'q';
        }
        else if(a[i] == 'q')
        {
            a[i] = 'p';
        }
    }
    cout << a << endl;
    }
    return 0;
}