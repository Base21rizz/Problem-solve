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
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            v.push_back(num);
        }
        sort(v.begin(), v.end());

        int count = 0;
        if (v[0] == v[n - 1])
            cout << 0 << endl;
        else
        {
            while (v[0] != v[n - 1])
            {
                v[n - 1] /= 2;
                count++;
                sort(v.begin(), v.end());
            }
            cout << count << endl;
        }
    }
    return 0;
}