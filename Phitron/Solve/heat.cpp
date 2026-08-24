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
    int temp = 0;
    vector<int> mexes;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        while (arr[i] > temp)
        {
            mexes.pb(temp);
            temp++;
        }
        if (arr[i] == temp)
            temp++;
    }
    for (auto it : mexes)
        cout << it << " ";

    return 0;
}
