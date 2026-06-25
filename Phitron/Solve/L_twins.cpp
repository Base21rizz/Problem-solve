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
    int n, half, count = 0, sum1 = 0, total = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        total += arr[i];
    }
    half = total / 2;
    sort(arr, arr + n);
    for (int i = n - 1; i >= 0; i--)
    {
        sum1 += arr[i];
        count++;
        if (sum1 > half)
        {
            cout << count;
            return 0;
        }
    }

    cout << count;
    return 0;
}