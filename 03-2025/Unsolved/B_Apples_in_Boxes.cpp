#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define endl '\n'
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define pb push_back
using namespace std;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        vi v;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            v.pb(num);
        }
        sort(v.begin(),v.end(),greater<int>());
        int _max = v[0];
        int _min = v[n-1];
        int count = 1;
        int m = 0;
        if(_max-1-_min > k)
        {
            cout << "Jerry" << endl;
        }
        else
        {
            cout << "Tom" << endl;
        }
    }
    return 0;
}
