#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int arr[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
            mp[arr[i] - i]++;
        int mx = 0;
        for (auto it : mp)
            mx = max(it.second, mx);
        cout << n - mx << endl;
    }
    return 0;
}