#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define pb push_back
using namespace std;

signed main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    set<int> x;
    int p;cin>>p;
    for (int i = 0; i < p; i++)
    {
        int number;
        cin >> number;
        x.insert(number);
    }
    int q;cin>>q;
    for (int i = 0; i < q; i++)
    {
        int number;
        cin >> number;
        x.insert(number);
    }
    int sizexy = x.size();
    if(sizexy == n)
    {
        cout << "I become the guy.";
    }
    else{
        cout << "Oh, my keyboard!";
    }
    
    return 0;
}