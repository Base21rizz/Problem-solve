/*
===============================================================================

██████╗  █████╗ ███████╗███████╗██████╗  ██╗██████╗ ██╗███████╗███████╗
██╔══██╗██╔══██╗██╔════╝██╔════╝╚════██╗███║██╔══██╗██║╚══███╔╝╚══███╔╝
██████╔╝███████║███████╗█████╗   █████╔╝╚██║██████╔╝██║  ███╔╝   ███╔╝
██╔══██╗██╔══██║╚════██║██╔══╝  ██╔═══╝  ██║██╔══██╗██║ ███╔╝   ███╔╝
██████╔╝██║  ██║███████║███████╗███████╗ ██║██║  ██║██║███████╗███████╗
╚═════╝ ╚═╝  ╚═╝╚══════╝╚══════╝╚══════╝ ╚═╝╚═╝  ╚═╝╚═╝╚══════╝╚══════╝

===============================================================================
*/
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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int maxi = -1, mini = LLONG_MAX;
        vector<int> arr(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            mini = min(mini, arr[i]);
            maxi = max(maxi, arr[i]);
        }
        bool flag = false;
        int i = 1, j = n;
        while (true)
        {
            if (i > j)
                break;
            if ((arr[i] != mini && arr[i] != maxi) && (arr[j] != mini && arr[j] != maxi))
            {
                flag = true;
                break;
            }
            else if (arr[i] == mini)
            {
                i++;
                mini++;
            }
            else if (arr[i] == maxi)
            {
                i++;
                maxi--;
            }
            else if (arr[j] == mini)
            {
                j--;
                mini++;
            }
            else if (arr[j] == maxi)
            {
                j--;
                maxi--;
            }
        }
        if (flag)
            cout << i << " " << j << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}