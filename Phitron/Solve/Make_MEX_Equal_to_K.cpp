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
    int n, k;
    cin >> n;
    int arr[n];
    int temp = 0;
    vector<int> mexes;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cin >> k;
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
    mexes.pb(temp);

    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            cout << "-1";
            return 0;
        }
    }
    for (int i = 0; i <= k - 1; i++)
    {
        bool flag = false;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i)
            {
                flag = true;
                break;
            }
        }
        if (!flag)
            answer++;
    }
    cout << answer;
    return 0;
}
