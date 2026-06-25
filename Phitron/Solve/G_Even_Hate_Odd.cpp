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
        int even = 0, odd = 0;
        int ans = 0;
        cin >> n;
        int arr[n];
        if (n % 2 != 0)
        {
            for (int i = 0; i < n; i++)
                cin >> arr[i];
            cout << "-1" << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
                if (arr[i] % 2 == 0)
                    even++;
                else
                    odd++;
            }
            ans = (odd - (n / 2));
            cout << abs(ans) << endl;
        }
    }
    return 0;
}