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
    int n;
    cin >> n;
    int spaces = 2 * n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = spaces; j > 0; j--)
            cout << " ";
        for (int j = 0; j <= i; j++)
        {
            if (i == 0 && j == 0)
                cout << 0;
            else
                cout << j << ' ';
        }
        for (int j = i - 1; j >= 0; j--)
        {
            if (j == 0)
                cout << 0;
            else
                cout << j << ' ';
        }

        spaces -= 2;
        cout << endl;
    }
    spaces = 2;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = spaces; j > 0; j--)
            cout << " ";
        for (int j = 0; j <= i; j++)
            if (i == 0 && j == 0)
                cout << 0;
            else
                cout << j << ' ';
        for (int j = i - 1; j >= 0; j--)
        {
            if (j == 0)
                cout << 0;
            else
                cout << j << ' ';
        }

        spaces += 2;
        cout << endl;
    }

    return 0;
}
