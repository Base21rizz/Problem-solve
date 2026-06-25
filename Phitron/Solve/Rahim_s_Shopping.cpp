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
    int n, HP;
    cin >> n >> HP;
    int arr[n];
    int newArr[n] = {0};
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= HP)
        {
            newArr[j] = arr[i];
            j++;
        }
    }
    sort(newArr, newArr + n, greater<int>());

    if (newArr[0] == 0)
        cout << "-1";
    else
        cout << newArr[0] << endl;

    return 0;
}