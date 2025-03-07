#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define pb push_back
using namespace std;

signed main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n,count = 1,maxcount = 1; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] <= arr[i+1])
        {
            count++;
        }
        else if(arr[i] > arr[i+1])
        {
            maxcount = max(maxcount,count);
            count = 1;
        }
    }
    maxcount = max(maxcount,count);
    cout << maxcount;
    return 0;
}