#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n];
        int sum = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            int c = ((sum * (sum - 1)) / 2);
            if (c <= m)
                ans++;
            else
                break;
        }
        cout << ans << endl;
    }
}