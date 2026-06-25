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
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int height = arr[k - 1];
    int count1 = 0, count2 = 0;
    for (int i = 0; i < k - 1; i++)
    {
        if (arr[i] > height)
            count1++;
    }
    for (int i = k; i < n; i++)
    {
        if (arr[i] < height)
            count2++;
    }
    cout << count1 << " " << count2 << endl;
    return 0;
}