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
    bool flag = false;
    cin >> n;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.pb(num);
    }
    for (int i = 0; i < n/2; i++)
    {
        if(v[i] != v[n-1-i])
        {
            NO
            return 0;
        }
    }
    YES
    return 0;
}
