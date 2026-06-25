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
    int sortArr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sortArr[i] = arr[i];
    }
    sort(sortArr, sortArr + n);
    int median = n / 2;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == sortArr[median])
            index = i;
    }
    if (index == n / 2)
    {
        cout << 0;
    }
    else
        cout << abs(index - median);

    return 0;
}