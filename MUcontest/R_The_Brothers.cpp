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
    string s,t,q,r;
    cin >> s >> t >> q >> r;
    if(t == r)
    {
        cout << "ARE Brothers";
    }
    else
    {
        cout << "NOT";
    }
    return 0;
}
