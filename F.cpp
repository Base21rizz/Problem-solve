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
        vector<int> arr;
        arr.push_back(0);
        for (int i = 1; i <= n; i++)
        {
            int val;
            cin >> val;
            arr.push_back(val);
        }
        int og = arr[n / 2];
        int i = 1, j = n;
        int tim = 0;
        bool flag = true;
        sort(arr.begin(), arr.end());
        /* for (int i = 1; i <= n; i++)
        {
            cout << arr[i] << " ";
        }
 */
        while (true)
        {
            tim++;
            if (tim % 2 == 0)
                i++;
            else
                j--;
            int median = floor((j - i) / 2);
            if (arr[median] != og)
            {
                flag = false;
                break;
            }
            cout << arr[median] << endl;
        } /*
         if (!flag)
             cout << i << " " << j << endl;
         else
             cout << "-1" << endl; */
    }
    return 0;
}