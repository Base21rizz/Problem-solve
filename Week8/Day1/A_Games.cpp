#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define pb push_back
using namespace std;

signed main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int tc,uga = 0;
    vector<int>v1;
    vector<int>v2;
    set<int>jersey;
    cin >> tc;
    while (tc--)
    {
        int a,b;
        cin >> a >>b;
        v1.pb(a);
        v2.pb(b);
        jersey.insert(a);
        jersey.insert(b);
    }
    for(auto x:jersey)
    {
        int home = count(v1.begin(),v1.end(),x);
        int away = count(v2.begin(),v2.end(),x);
        uga += (home*away);
    }
    cout << uga;
    return 0;
}