#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define pb push_back
using namespace std;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, sum;
        cin >> n >> sum;
        int arr[n];
        for (auto &i : arr)
            cin >> i;
        bool flag = false;

        vector<pair<int, int>>
            unique;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
                unique.pb({i, j});
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < (int)unique.size(); j++)
            {
                if (unique[j].first == i || unique[j].second == i)
                    continue;
                if ((arr[i] + arr[unique[j].first] + arr[unique[j].second]) == sum)
                    flag = true;
            }
        }
        if (flag == false)
            NO;
        else
            YES;
    }
    return 0;
}