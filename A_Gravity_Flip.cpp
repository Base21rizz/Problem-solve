#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define pb push_back
using namespace std;

signed main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n;cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        v.pb(number);
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    
    
    return 0;
}