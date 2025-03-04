#include <bits/stdc++.h>
#define endl '\n'
#define pb push_back
using namespace std;

signed main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int a,b,c,ans = 0,ans1 = 0,ans2 = 0,ans3 = 0;
    vector<int>v;
    cin>>a>>b>>c;
    ans = a+b+c;
    ans1 = max(ans,((a+b)*c));
    v.pb(ans1);
    ans2 = max(ans,(a*(b+c)));
    v.pb(ans2);
    ans3 = max(ans,(a*b*c));
    v.pb(ans3);
    sort(v.begin(),v.end());
    cout << v[2];
    return 0;
}