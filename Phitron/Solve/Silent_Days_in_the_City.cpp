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
    int n, q;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> q;
    while (q--)
    {
        int count = 0;
        int l, r;
        cin >> l >> r;
        int andy = l - 1;
        int bndy = r - 1;
        for (int i = l; i <= r; i++)
        {
            if (((arr[i - 1] < arr[i - 2]) && (i - 2 >= 0)) && ((arr[i - 1] < arr[i]) && (i < n)))
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}