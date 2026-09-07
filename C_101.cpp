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
        int arr[n];
        int first1 = LLONG_MAX;
        int last1 = -1;
        int firstminus1 = LLONG_MAX;
        int lastminus1 = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
                first1 = min(first1, i);
            else if (arr[i] == -1)
                firstminus1 = min(firstminus1, i);
        }
        for (int i = n - 1; i > 0; i--)
        {
            if (arr[i] == 1)
                last1 = max(last1, i);
            else if (arr[i] == -1)
                lastminus1 = max(lastminus1, i);
        }

        if (firstminus1 < first1)
            arr[firstminus1] = 1;
        else if (firstminus1 > first1)
            arr[firstminus1] = 0;
        else if (lastminus1 > last1)
            arr[lastminus1] = 1;
        else
            arr[lastminus1] = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == -1)
                arr[i] = 0;
        }

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";

        cout << endl;
    }
    return 0;
}