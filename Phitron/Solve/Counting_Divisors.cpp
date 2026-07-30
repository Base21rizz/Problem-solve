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
        int x;
        cin >> x;
        map<int, int> v;
        for (int i = 2; i*i <= x; i++)
        {
            while (x % i == 0)
            {
                v[i]++;
                x /= i;
            }
        }
        if(x>1) v[x] ++;
        int total_divisors = 1;
        for (const auto &pair : v)
        {
            total_divisors *= (pair.second + 1);
        }
        cout << total_divisors << endl;
    }
    return 0;
}
