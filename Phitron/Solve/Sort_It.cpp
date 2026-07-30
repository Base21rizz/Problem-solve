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
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    sort(arr, arr + n, greater<int>());
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}