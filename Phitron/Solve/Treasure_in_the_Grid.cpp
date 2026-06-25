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
    int n, m, q, x1, x2, y1, y2;
    cin >> n >> m >> q;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    while (q--)
    {
        int count = 0;
        cin >> x1 >> x2 >> y1 >> y2;
        for (int i = x1; i <= y1; i++)
        {
            for (int j = x2; j <= y2; j++)
            {
                count += arr[i][j];
            }
        }
        cout << count << endl;
    }

    return 0;
}