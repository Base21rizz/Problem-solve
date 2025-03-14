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
    int n;
    cin >> n;
    string s;
    unordered_map<string,int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if(m[s])
        {
            cout << s << m[s] << endl;
            m[s]++;
        }
        else
        {
            cout << "OK" << endl;
            m[s] = 1;
        }
    }
    
    return 0;
}
