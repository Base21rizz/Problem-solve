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
    ios::sync_with_stdio(false); cin.tie(NULL);
    int tc; cin >> tc;
    while (tc--) 
    {
        int n; cin >> n;
        int cur=1,prev=0;
        for (int i = 2; i <= n; i++)
        {
            int temp = cur;
            cur = prev+cur;
            prev = cur;
        }
        cout << cur << endl;
    }
    return 0;
}
