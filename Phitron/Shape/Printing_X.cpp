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
    int xPos = ((n + 2) - 1) / 2;
    int arr[n][n];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == xPos && j == xPos)
                cout << 'X';
            else if ((i == j) && (i != xPos && j != xPos))
                cout << '\\';
            else if ((i + j == n + 1) && (i != xPos && j != xPos))
                cout << '/';
            else
                cout << ' ';
        }
        cout << endl;
    }

    return 0;
}