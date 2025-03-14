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
    int tc,n = 0; cin >> tc;
    vector<string> v;
    while (tc--) 
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if(v[i] == s)
            {
                n++;
            }
        }
        for (int i = 0; i < v.size(); i++)
        {
            if(v[i] != s)
            {
                cout << "OK";
            }
            else
            {
                cout << s << n;
            }
        }
        v.pb(s);
        n = 0;
    }
    
    return 0;
}
